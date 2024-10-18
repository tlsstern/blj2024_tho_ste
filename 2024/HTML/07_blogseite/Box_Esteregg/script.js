const container = document.getElementById('container');
        const cubes = [];
        const minCubes = 40;
        const maxCubes = 60;
        const minLifespan = 50000; // 50 seconds
        const maxLifespan = 70000; // 70 seconds

        function createCube() {
            const cube = document.createElement('div');
            cube.className = 'cube';
            cube.style.backgroundColor = getRandomColor();
            cube.style.left = Math.random() * (container.clientWidth - 20) + 'px';
            cube.style.top = Math.random() * (container.clientHeight - 20) + 'px';
            container.appendChild(cube);

            const velocity = getRandomVelocity();
            const lifespan = Math.floor(Math.random() * (maxLifespan - minLifespan + 1)) + minLifespan;

            cubes.push({ element: cube, velocity, createdAt: Date.now(), lifespan });
        }

        function getRandomColor() {
            return `hsl(${Math.random() * 360}, 100%, 50%)`;
        }

        function getRandomVelocity() {
            const speed = 2 + Math.random() * 3;
            const angle = Math.random() * 2 * Math.PI;
            return {
                x: Math.cos(angle) * speed,
                y: Math.sin(angle) * speed
            };
        }

        function updateVelocity(velocity) {
            const newVelocity = getRandomVelocity();
            const random = Math.random();
            let speedChange;
            
            if (random < 0.6) {
                // 60% chance to gain speed
                speedChange = 1 + Math.random() * 0.5; // Increase by 0-20%
            } else if (random < 0.8) {
                // 20% chance to keep speed
                speedChange = 1;
            } else {
                // 20% chance to lose speed
                speedChange = 0.8 + Math.random() * 0.2; // Decrease by 0-20%
            }

            return {
                x: newVelocity.x * speedChange,
                y: newVelocity.y * speedChange
            };
        }

        function updatePositions() {
            const currentTime = Date.now();
            const containerRect = container.getBoundingClientRect();

            for (let i = cubes.length - 1; i >= 0; i--) {
                const cube = cubes[i];
                const rect = cube.element.getBoundingClientRect();

                if (currentTime - cube.createdAt > cube.lifespan) {
                    container.removeChild(cube.element);
                    cubes.splice(i, 1);
                    continue;
                }

                let left = rect.left - containerRect.left + cube.velocity.x;
                let top = rect.top - containerRect.top + cube.velocity.y;

                if (left <= 0 || left + rect.width >= containerRect.width) {
                    cube.velocity = updateVelocity(cube.velocity);
                    left = Math.max(0, Math.min(left, containerRect.width - rect.width));
                }
                if (top <= 0 || top + rect.height >= containerRect.height) {
                    cube.velocity = updateVelocity(cube.velocity);
                    top = Math.max(0, Math.min(top, containerRect.height - rect.height));
                }

                cube.element.style.left = left + 'px';
                cube.element.style.top = top + 'px';
            }

            // Spawn new cubes if needed
            while (cubes.length < minCubes) {
                createCube();
            }

            requestAnimationFrame(updatePositions);
        }

        // Initialize with random number of cubes between minCubes and maxCubes
        const initialCubes = Math.floor(Math.random() * (maxCubes - minCubes + 1)) + minCubes;
        for (let i = 0; i < initialCubes; i++) {
            createCube();
        }

        updatePositions();