#pragma once
class Tetris
{
public:
	Tetris(int rows,int cols,int left,int top,int blockSize );
	void init();
	void play();
private:
	void keyEven();//���ʺϹ�������Ϊ��play���ڲ�ʹ�õģ�ʹ��private
	void updateWindow();
	//��һ�ε��ú���������0
	int getDelay();//���ؾ�����һ�ε��øú���������˶���ʱ��
	void drop();
	void clearLine();
  
private:
	//˽�����ݳ�Ա
	int delay;
	bool update;//�Ƿ����
};

