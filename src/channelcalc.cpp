#include "FormHandler.h"
#include "Channelcalc.hpp"

// Создание экземпляра класа приложения
wxIMPLEMENT_APP(Channelcalc);


// Реализация Функции отрисовки окна при старте приложения
bool Channelcalc::OnInit()
{
    FormHandler *form = new FormHandler(NULL, wxID_ANY, wxT("ChannelCalc") );
	form->Show(true);
    return true;
}

