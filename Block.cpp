#include "Block.h"
#include <stdlib.h>
Block::Block()
{
  int blocks[7][4] = {
	  1,3,4,5,
	  2,4,5,7,
	  3,5,4,6,
	  3,5,4,7,
	  2,3,5,7,
	  3,5,7,6,
	  2,3,4,5
  };
  //�������һ�ֶ���˹����
  blockType = 1+rand() % 7;  

  //��ʼ�� smallBlocks
  for (int i = 0; i < 4; i++)
  {   
	  int value = blocks[blockType - 1][i];
	  smallBlocks[i].row = value / 2;
	  smallBlocks[i].col = value % 2;
   }
}

void Block::drop()
{
}

void Block::moveLeftTight()
{
}

void Block::rotate()
{
}
