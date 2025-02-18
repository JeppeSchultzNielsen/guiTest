//
// Created by jeppe on 2/17/25.
//

#include "TGMainFrameExample.hh"

TGMainFrameExample::TGMainFrameExample(const TGWindow* p, UInt_t w, UInt_t h)
            : TGMainFrame(p, w, h) {
        // Horizontal frame to hold buttons
        TGHorizontalFrame *hframe = new TGHorizontalFrame(this, 200, 40);

        // Create a button to close the application
        TGTextButton* button = new TGTextButton(hframe, "Close");
        button->Connect("Clicked()", "TApplication", gApplication, "Terminate()");

        // Set up the layout and add the close button to the frame
        hframe->AddFrame(button, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY, 5, 5, 5, 5));

        // Create a button to print the message
        TGTextButton* printButton = new TGTextButton(hframe, "Print Message");
        printButton->Connect("Clicked()", "TGMainFrameExample", this, "PrintMessage()");

        // Add the horizontal frame to the main frame
        AddFrame(hframe, new TGLayoutHints(kLHintsCenterX | kLHintsCenterY, 5, 5, 5, 5));

        // Set a name to the main frame
        SetWindowName("Simple Example");

        // Map all subwindows of main frame
        MapSubwindows();

        // Initialize the layout algorithm
        Resize(GetDefaultSize());

        // Map main frame
        MapWindow();
    }

// Destructor for cleanup
TGMainFrameExample::~TGMainFrameExample() {
    // Cleanup
    Cleanup();
}

void TGMainFrameExample::PrintMessage() {
        std::cout << "Hello from the Print Message button!" << std::endl;
    }

ClassImp(TGMainFrameExample);  // This adds the necessary implementation for ROOT to work with the class
