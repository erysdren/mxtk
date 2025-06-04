
#include <mx/mx.h>

int main(int argc, char *argv[])
{
	mx::init(argc, argv);

	mxWindow *mainwindow = new mxWindow(mx::getMainWindow(), 0, 0, 0, 0, nullptr, mxWindow::Normal);
	mxWindow *subwindow = new mxWindow(mainwindow, 0, 0, 640, 480, "hello world", mxWindow::Normal);

	mx::run();

	delete subwindow;
	delete mainwindow;

	mx::quit();

	return 0;
}
