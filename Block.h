#pragma once

struct Point {
	int row;
	int col;
};
class Block
{
public:
	Block();
	void drop();
	void moveLeftTight();//左右移动
	void rotate();//旋转

private:
	int blockType;
	Point smallBlocks[4]; //每个小方块
};

