#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;

void render();
void level1();
void level2();
void level3();
void gotoxy();

int main(void) {

	render();

}

void render() {

	level1();
	level2();
	level3();

	//S = Player @ Starting pt.
	//B = Box to be pushed.
	//X = Location where the Box has to be pushed.
	//P = Portal will appear to go next level.
}

void level1() {

	cout << "Level 1" << endl;
	char map1[18][32] = {
	"                               ",
	"                               ",
	"                               ",
	"              ###              ",
	"              #X#              ",
	"              # #              ",
	"              # #              ",
	"              # #              ",
	"              # #              ",
	"              #B#              ",
	"              #P#              ",
	"              # #              ",
	"              # #              ",
	"              # #              ",
	"              #S#              ",
	"              ###              ",
	"                               ",
	"                               ",
	};

	for (int i = 0; i<18; i++)
	{
		cout << map1[i] << endl;
	}
}

void level2() {

	cout << "Level 2" << endl;
	char map2[18][32] = {
	"                               ",
	"                               ",
	"                               ",
	"                               ",
	"         ##       ###          ",
	"        # P#      #X#          ",
	"         #  #     # #          ",
	"         #  #     # #          ",
	"         #  ####### #          ",
	"       ### ### B    #          ",
	"       #        ##  ###        ",
	"       # ##############        ",
	"       #              #        ",
	"       #B############ #        ",
	"       #X#    #S      #        ",
	"       ###    #########        ",
	"                               ",
	"                               ",
	};
		for (int i = 0; i<18; i++)
	{
		cout << map2[i] << endl;

	}
}

void level3() {

	cout << "Level 3" << endl;
	char map3[18][32] = {
	"                               ",
	"                               ",
	"       ####################    ",
	"       #                 X#    ",
	"       #   ################    ",
	"       ###  #                  ",
	"         #  #########          ",
	"         #         X#######    ",
	"       ###  ###########   #    ",
	"       #            ### B #    ",
	"       #                BP#    ",
	"       #   ############ B #    ",
	"       #  ##########  #   #    ",
	"       #              #####    ",
	"       ########S#####X#        ",
	"              ###   ###        ",
	"                               ",
	"                               ",
	};
		for (int i = 0; i<18; i++)
	{
		cout << map3[i] << endl;

	}

}
