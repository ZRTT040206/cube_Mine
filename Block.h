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
	void moveLeftTight();//�����ƶ�
	void rotate();//��ת

private:
	int blockType;
	Point smallBlocks[4]; //ÿ��С����
};

