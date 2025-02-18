//
// Created by jeppe on 2/17/25.
//

#ifndef GUITEST_TGMAINFRAMEEXAMPLE_HH
#define GUITEST_TGMAINFRAMEEXAMPLE_HH

#include <TApplication.h>
#include <TGClient.h>
#include <TGFrame.h>
#include <TGButton.h>
#include <TCanvas.h>
#include <iostream>

class TGMainFrameExample : public TGMainFrame {
public:
    // Constructor for the main frame
    TGMainFrameExample(const TGWindow* p, UInt_t w, UInt_t h);

    // Destructor for cleanup
    virtual ~TGMainFrameExample();

    void PrintMessage();

    ClassDef(TGMainFrameExample, 0); // Add the ClassDef macro
};

#endif //GUITEST_TGMAINFRAMEEXAMPLE_HH
