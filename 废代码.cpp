/*
	stars[i].place[1].x = stars[i].x + stars[i].r * sin(stars[i].angle * pi / 180);
	cout << "\t"<<  stars[i].angle * pi / 180;
	stars[i].place[1].y = stars[i].y + stars[i].r * cos(stars[i].angle * pi / 180);
	stars[i].place[2].x = stars[i].x + stars[i].r * sin((stars[i].angle + 72) * pi / 180);
	cout << "\t" <<(stars[i].angle + 72) * pi / 180;
	stars[i].place[2].y = stars[i].y + stars[i].r * cos((stars[i].angle + 72) * pi / 180);
	stars[i].place[3].x = stars[i].x + stars[i].r * sin((stars[i].angle + 144) * pi / 180);
	cout << "\t" << sin((stars[i].angle + 144) * pi / 180);
	stars[i].place[3].y = stars[i].y + stars[i].r * cos((stars[i].angle + 144) * pi / 180);
	stars[i].place[4].x = stars[i].x + stars[i].r * sin((stars[i].angle - 144) * pi / 180);
	cout << "\t" << sin((stars[i].angle - 144) * pi / 180);
	stars[i].place[4].y = stars[i].y + stars[i].r * cos((stars[i].angle - 144) * pi / 180);
	stars[i].place[5].x = stars[i].x + stars[i].r * sin((stars[i].angle - 72) * pi / 180);
	cout << "\t" << sin((stars[i].angle - 72) * pi / 180)<<"\n";
	stars[i].place[5].y = stars[i].y + stars[i].r * cos((stars[i].angle - 72) * pi / 180);


	*/

	//setlinecolor(YELLOW); // 设置线段颜色为黄色
		//setlinestyle(PS_SOLID, 3); // 设置线段样式为实线，线宽为3个像素
		//setfillcolor(stars[i].color);
		//filltriangle(stars[i].x_s1, stars[i].y_s1, stars[i].x_l1, stars[i].y_l1, stars[i].x_r1, stars[i].y_r1); // 填充三角形
		//line(stars[i].x_s1, stars[i].y_s1, stars[i].x_l1, stars[i].y_l1); // 绘制五角星的第一条边
		//line(stars[i].x_s1, stars[i].y_s1, stars[i].x_r1, stars[i].y_r1); // 绘制五角星的第二条边
		//line(stars[i].x_l1, stars[i].y_l1, stars[i].x_r1, stars[i].y_r1); // 绘制五角星的第三条边

		//line(stars[i].x_b2, stars[i].y_b2, stars[i].x_r2, stars[i].y_r2); // 绘制五角星的第一条边
		//line(stars[i].x_b2, stars[i].y_b2, stars[i].x_l2, stars[i].x_l2); // 绘制五角星的第二条边
		//line(stars[i].x_r2, stars[i].y_r2, stars[i].x_l2, stars[i].x_l2); // 绘制五角星的第三条边


//正三角形
	//stars[i].x_s1= stars[i].x+ stars[i].r* sin(stars[i].angle * pi / 180);
	//stars[i].y_s1 =stars[i].y + stars[i].r * cos(stars[i].angle * pi / 180);
	//stars[i].x_l1= stars[i].x + stars[i].r * sin((stars[i].angle+108) * pi / 180);
	//stars[i].y_l1= stars[i].y + stars[i].r * cos((stars[i].angle + 108) * pi / 180 );
	//stars[i].x_r1 = stars[i].x+ stars[i].r * sin((stars[i].angle - 108) * pi / 180 );
	//stars[i].y_r1 = stars[i].y+stars[i].r * cos((stars[i].angle - 108) * pi / 180 );
	//倒三角形
	//stars[i].x_b2 = stars[i].x - stars[i].r * sin(stars[i].angle * pi / 180);
	//stars[i].y_b2 = stars[i].y - stars[i].r * cos(stars[i].angle * pi / 180);
	//stars[i].x_r2 = stars[i].x - stars[i].r * sin((stars[i].angle + 108) * pi / 180);
	//stars[i].y_r2 = stars[i].y - stars[i].r * cos((stars[i].angle + 108) * pi / 180);
	//stars[i].x_l2 = stars[i].x - stars[i].r * sin((stars[i].angle - 108) * pi / 180);
	//stars[i].y_l2 = stars[i].y - stars[i].r * cos((stars[i].angle - 108) * pi / 180);
