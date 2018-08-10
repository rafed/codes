#include <ncurses.h>

int main(){
	initscr();
	raw();

	printw("Hello world");
	getch();

	endwin();

	return 0;
}
