const container = document.querySelector('.container');
const cursor = document.querySelector('.cursor');
let blocks = [];
let mouseX = 0,
    mouseY = 0;
let lastMouseX = 0,
    lastMouseY = 0;
let isMouseMoving = false;
let lastMouseMoveTime = Date.now();

function createBlock(x, y) {
    const block = document.createElement('div');
    block.className = 'block';
    block.style.backgroundColor = getRandomColor();
    block.style.left = x + 'px';
    block.style.top = y + 'px';
    container.appendChild(block);
    blocks.push({
        element: block,
        x: x,
        y: y,
        vx: (Math.random() - 0.5) * 5,
        vy: (Math.random() - 0.5) * 5
    });
}

function getRandomColor() {
    return '#' + Math.floor(Math.random() * 16777215).toString(16);
}

function initializeBlocks() {
    while (blocks.length < 40) {
        createBlock(Math.random() * (container.offsetWidth - 60), Math.random() * (container.offsetHeight - 60));
    }
}

initializeBlocks();

document.addEventListener('mousemove', (e) => {
    mouseX = e.clientX;
    mouseY = e.clientY;
    cursor.style.left = mouseX + 'px';
    cursor.style.top = mouseY + 'px';
    isMouseMoving = true;
    lastMouseMoveTime = Date.now();
});

function getContainerDimensions() {
    return {
        width: container.offsetWidth,
        height: container.offsetHeight
    };
}

function animate() {
    const containerDimensions = getContainerDimensions();
    const currentTime = Date.now();
    const timeSinceLastMouseMove = currentTime - lastMouseMoveTime;

    if (isMouseMoving) {
        let dx = mouseX - lastMouseX;
        let dy = mouseY - lastMouseY;
        blocks.forEach(block => {
            block.vx += dx * 0.1;
            block.vy += dy * 0.1;
        });
        lastMouseX = mouseX;
        lastMouseY = mouseY;
        isMouseMoving = false;
    } else if (timeSinceLastMouseMove > 500) {
        blocks.forEach(block => {
            block.vx += (Math.random() - 0.5) * 2;
            block.vy += (Math.random() - 0.5) * 2;
        });
    }

    blocks.forEach(block => {
        block.vx *= 0.98;
        block.vy *= 0.98;

        block.x += block.vx;
        block.y += block.vy;

        // Bounce off container edges (corrected)
        const containerWidth = containerDimensions.width - 2; // Subtract 2 for border width
        const containerHeight = containerDimensions.height - 2; // Subtract 2 for border width
        if (block.x < 0 || block.x > containerWidth - block.element.offsetWidth) {
            block.vx *= -1;
            block.x = Math.max(0, Math.min(block.x, containerWidth - block.element.offsetWidth));
        }
        if (block.y < 0 || block.y > containerHeight - block.element.offsetHeight) {
            block.vy *= -1;
            block.y = Math.max(0, Math.min(block.y, containerHeight - block.element.offsetHeight));
        }

        block.element.style.transform = `translate(${block.x}px, ${block.y}px)`;
    });

    requestAnimationFrame(animate);
}

animate();

// Ensure 40 blocks are always on screen and handle window resizing
function updateBlocks() {
    const containerDimensions = getContainerDimensions();
    blocks = blocks.filter(block => {
        if (block.x < containerDimensions.width && block.y < containerDimensions.height) {
            return true;
        } else {
            block.element.remove();
            return false;
        }
    });
    initializeBlocks();
}

setInterval(updateBlocks, 1000);
window.addEventListener('resize', updateBlocks);