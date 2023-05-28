#include"star.h"
#ifndef LAYER_H_//https://blog.csdn.net/qq_44378854/article/details/109298352?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522168486348516800217262458%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=168486348516800217262458&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-109298352-null-null.142^v87^insert_down1,239^v2^insert_chatgpt&utm_term=%E5%AE%8F%E5%AE%9A%E4%B9%89&spm=1018.2226.3001.4187
#define LAYER_H_//但每个头文件的这个“标识”都应该是唯一的。标识的命名规则一般是头文件名全大写，前后加下划线，

class layer
{
public:
	void Refresh();
	layer(int=1000,int=720);
	star stars;
private:
	IMAGE img;
	int x, y;
	void background();
	void moon();


};


#endif // MYGRAPHICS_H