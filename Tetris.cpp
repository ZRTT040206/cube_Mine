#include "Tetris.h"

Tetris::Tetris(int rows, int cols, int left, int top, int blockSize)
{
}

void Tetris::init()
{
	delay = 30;
}

void Tetris::play()
{
	init();
	int timer = 0;
	while (1){
	/*	//���Ƚ����û�����
		keyEven();
		//����Ⱦ��Ϸ����
		updateWindow();
		����ÿ�����һ����Ⱦ��cpu���ɽϴ�
		ʹ����һ�ַ���
	*/
		keyEven();
		timer += getDelay();
		//keyEven����ֻ��play��ʹ�ã�����Ϊ˽��;
		if (timer > delay) {

			//��Ⱦ��Ϸ����
			drop();
			timer = 0;
			update = true;
		}
		if (update)
		{
			update = false;
            updateWindow();
		}
		

	}
}

void Tetris::keyEven()
{
	update = true;
	//to do.��ʼ��
}

void Tetris::updateWindow()
{

}

int Tetris::getDelay()
{

	return 0;
}

void Tetris::drop()
{
}

void Tetris::clearLine()
{
}
