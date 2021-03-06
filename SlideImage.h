#include <wx/image.h>
#include <wx/colour.h>
#include <iostream>
#include "ImageConfiguration.h"
using namespace std;
/**
* klasa wyświetlanego obrazka
* @author Marcin Niesciur
*/
class SlideImage : public wxImage {
    private:
           // zmienna określająca obecność ramki wokół obrazka
           bool isPolaroidFrame;
           // kolor ramki
           wxColour polaroidFrameColor;
           // zmienna określająca obecność opisu wyświetlanego na ramce
           bool isDescription;
           // opis 
           string description;
           // wskażnik określający konfiguracje wyświetlanego obrazka
           ImageConfiguration *imgConf;
    public:
        SlideImage(int width, int height);
};
