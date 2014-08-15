#include "BaseWidget.h"
#include "ButtonWidget.h"
#include "DialogWidget.h"
#include "PanelWidget.h"
#include "PictureWidget.h"

int main(int argc, char* argv[])
{
	// create the main screen
	Widget* mainScreen = new PanelWidget(0, 0, 800, 600);

	// add background and icon images to the main screen
	mainScreen->AddWidget( new PictureWidget("background.jpg", 0, 0, 800, 600) );
	mainScreen->AddWidget( new PictureWidget("icon.jpg", 10, 10, 50, 50) );
	mainScreen->AddWidget( new ButtonWidget("X", 780, 0, 20, 20) );

	// create a dialog and add it to the main screen
	Widget* dialog = new DialogWidget("Pick a card!", 100, 50, 200, 200);

	ButtonWidget* aceButton = new ButtonWidget("Ace", 0, 50, 50, 75);
	aceButton->AddWidget( new PictureWidget("Ace.jpg", 10, 20, 30, 30) );
	dialog->AddWidget(aceButton);

	ButtonWidget* kingButton = new ButtonWidget("King", 50, 50, 50, 75);
	kingButton->AddWidget( new PictureWidget("King.jpg", 10, 20, 30, 30) );
	dialog->AddWidget(kingButton);

	ButtonWidget* queenButton = new ButtonWidget("Queen", 100, 50, 50, 75);
	queenButton->AddWidget( new PictureWidget("Queen.jpg", 10, 20, 30, 30) );
	dialog->AddWidget(queenButton);

	ButtonWidget* jackButton = new ButtonWidget("Jack", 150, 50, 50, 75);
	jackButton->AddWidget( new PictureWidget("Jack.jpg", 10, 20, 30, 30) );
	dialog->AddWidget(jackButton);

	dialog->RemoveWidget(aceButton);
	dialog->RemoveWidget(queenButton);
	dialog->AddWidget(queenButton);
	dialog->AddWidget(aceButton);

	dialog->AddWidget( new ButtonWidget("Exit", 50, 175, 100, 25) );

	// Configure some widgets 
	queenButton->SetEnabled(false);
	jackButton->SetEnabled(false);

	mainScreen->AddWidget( dialog );

	// print the debug information
	mainScreen->DebugInfo();

	// Clean up
	delete mainScreen;

	return 0;
}