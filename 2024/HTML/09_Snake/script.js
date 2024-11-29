const canvas = document.getElementById('gameCanvas');
const ctx = canvas.getContext('2d');
const scoreText = document.getElementById('scoreText');

// Set canvas size
canvas.width = 400;
canvas.height = 400;

// Game settings
const gridSize = 20;
const tileCount = canvas.width / gridSize;
let speed = 7;

// Snake initial position and body
let snake = [
    { x: 10, y: 10 }
];
let velocityX = 0;
let velocityY = 0;

// Food position
let foodX = Math.floor(Math.random() * tileCount);
let foodY = Math.floor(Math.random() * tileCount);

// Score
let score = 0;

// Colors
const COLORS = {
    snake: '#4ade80',       // Bright green
    snakeHead: '#22c55e',   // Darker green for head
    food: '#f87171',        // Coral red
    background: '#2a2a3a'   // Dark blue-grey
};

// Game loop
function gameLoop() {
    updateSnake();
    if (checkGameOver()) {
        alert('Game Over! Score: ' + score);
        resetGame();
        return;
    }
    clearCanvas();
    checkFoodCollision();
    drawFood();
    drawSnake();
    setTimeout(gameLoop, 1000 / speed);
}

// Update snake position
function updateSnake() {
    const newHead = { x: snake[0].x + velocityX, y: snake[0].y + velocityY };
    snake.unshift(newHead);
    if (!checkFoodCollision()) {
        snake.pop();
    }
}

// Draw snake
function drawSnake() {
    snake.forEach((segment, index) => {
        ctx.fillStyle = index === 0 ? COLORS.snakeHead : COLORS.snake;
        ctx.beginPath();
        ctx.roundRect(
            segment.x * gridSize, 
            segment.y * gridSize, 
            gridSize - 2, 
            gridSize - 2,
            5  // rounded corners
        );
        ctx.fill();
    });
}

// Draw food
function drawFood() {
    ctx.fillStyle = COLORS.food;
    ctx.beginPath();
    ctx.arc(
        foodX * gridSize + gridSize/2,
        foodY * gridSize + gridSize/2,
        gridSize/2 - 2,
        0,
        Math.PI * 2
    );
    ctx.fill();
}

// Clear canvas
function clearCanvas() {
    ctx.fillStyle = COLORS.background;
    ctx.fillRect(0, 0, canvas.width, canvas.height);
    
    // Add grid pattern (optional)
    ctx.strokeStyle = 'rgba(255, 255, 255, 0.05)';
    ctx.lineWidth = 1;
    for(let i = 0; i < tileCount; i++) {
        ctx.beginPath();
        ctx.moveTo(i * gridSize, 0);
        ctx.lineTo(i * gridSize, canvas.height);
        ctx.stroke();
        
        ctx.beginPath();
        ctx.moveTo(0, i * gridSize);
        ctx.lineTo(canvas.width, i * gridSize);
        ctx.stroke();
    }
}

// Check food collision
function checkFoodCollision() {
    if (snake[0].x === foodX && snake[0].y === foodY) {
        foodX = Math.floor(Math.random() * tileCount);
        foodY = Math.floor(Math.random() * tileCount);
        score += 1;
        scoreText.textContent = score;
        return true;
    }
    return false;
}

// Check game over conditions
function checkGameOver() {
    // Wall collision
    if (snake[0].x < 0 || snake[0].x >= tileCount || 
        snake[0].y < 0 || snake[0].y >= tileCount) {
        return true;
    }
    
    // Self collision
    for (let i = 1; i < snake.length; i++) {
        if (snake[0].x === snake[i].x && snake[0].y === snake[i].y) {
            return true;
        }
    }
    return false;
}

// Reset game
function resetGame() {
    snake = [{ x: 10, y: 10 }];
    velocityX = 0;
    velocityY = 0;
    score = 0;
    scoreText.textContent = score;
    foodX = Math.floor(Math.random() * tileCount);
    foodY = Math.floor(Math.random() * tileCount);
    gameLoop();
}

// Handle keyboard input
document.addEventListener('keydown', (event) => {
    switch (event.key) {
        case 'ArrowUp':
            if (velocityY !== 1) {
                velocityX = 0;
                velocityY = -1;
            }
            break;
        case 'ArrowDown':
            if (velocityY !== -1) {
                velocityX = 0;
                velocityY = 1;
            }
            break;
        case 'ArrowLeft':
            if (velocityX !== 1) {
                velocityX = -1;
                velocityY = 0;
            }
            break;
        case 'ArrowRight':
            if (velocityX !== -1) {
                velocityX = 1;
                velocityY = 0;
            }
            break;
    }
});

// Start the game
gameLoop();
