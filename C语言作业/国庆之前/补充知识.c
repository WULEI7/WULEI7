//学习有关系统函数，大家可以尝试编写简单的系统设置小程序：
# include <windows.h> //WIN系统函数头文件
//系统关机：
system("shutdown -s -t 60");    // 60秒立即自动关闭计算机系统，破解方法，进入到命令行方式（WIN+R,输入cmd），然后输入 shutdown -a

//改变颜色
system("color f4");   //改变f4数值，可以更换为其他颜色

//清除屏幕
system("cls");

//新开一个窗口
system("start");   //使用多次，就会新开多个窗口
		
