#include <TApplication.h>
#include <TGClient.h>
#include <TGFrame.h>
#include <TGButton.h>
#include <TCanvas.h>
#include <iostream>
#include "include/TGMainFrameExample.hh"

// Main function

using namespace std;

int main(int argc, char** argv) {
    // Create the ROOT application
    TApplication theApp("App", &argc, argv);

    // Create the main frame window
    TGMainFrameExample* mainFrame = new TGMainFrameExample(gClient->GetRoot(), 400, 300);

    // Run the application
    theApp.Run();

    return 0;
}