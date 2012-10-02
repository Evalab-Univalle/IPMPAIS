///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	mbar = new wxMenuBar( 0 );
	archivo = new wxMenu();
	wxMenuItem* salir;
	salir = new wxMenuItem( archivo, ID_SALIR, wxString( wxT("&Salir") ) + wxT('\t') + wxT("Alt+F4"), wxT("Salir de la aplicación"), wxITEM_NORMAL );
	archivo->Append( salir );
	
	mbar->Append( archivo, wxT("&Archivo") );
	
	configuracion = new wxMenu();
	wxMenuItem* baseDeDatos;
	baseDeDatos = new wxMenuItem( configuracion, ID_BASE_DE_DATOS, wxString( wxT("Base de datos") ) , wxEmptyString, wxITEM_NORMAL );
	configuracion->Append( baseDeDatos );
	
	mbar->Append( configuracion, wxT("Configuración") );
	
	ayuda = new wxMenu();
	wxMenuItem* item_ayuda;
	item_ayuda = new wxMenuItem( ayuda, ID_AYUDA, wxString( wxT("Ayuda") ) , wxEmptyString, wxITEM_NORMAL );
	ayuda->Append( item_ayuda );
	
	wxMenuItem* acercaDe;
	acercaDe = new wxMenuItem( ayuda, ID_ACERCA_DE_, wxString( wxT("&Acerca de ..") ) + wxT('\t') + wxT("F1"), wxT("Muestra información acerca de esta aplicación"), wxITEM_NORMAL );
	ayuda->Append( acercaDe );
	
	mbar->Append( ayuda, wxT("&Ayuda") );
	
	this->SetMenuBar( mbar );
	
	statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	panel_lectura = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( panel_lectura, wxID_ANY, wxT("Datos demograficos") ), wxVERTICAL );
	
	m_button1 = new wxButton( panel_lectura, wxID_ANY, wxT("Cargar información de admisiones ..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer1->Add( m_button1, 0, wxALL|wxEXPAND, 5 );
	
	progresoAdmisiones = new wxGauge( panel_lectura, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	sbSizer1->Add( progresoAdmisiones, 0, wxALL|wxEXPAND, 5 );
	
	bSizer2->Add( sbSizer1, 1, wxEXPAND, 50 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( panel_lectura, wxID_ANY, wxT("Puntajes del ICFES") ), wxVERTICAL );
	
	m_button5 = new wxButton( panel_lectura, wxID_ANY, wxT("Cargar puntajes del ICFES ..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( m_button5, 0, wxALL|wxEXPAND, 5 );
	
	progresoICFES = new wxGauge( panel_lectura, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	sbSizer6->Add( progresoICFES, 0, wxALL|wxEXPAND, 5 );
	
	bSizer2->Add( sbSizer6, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( panel_lectura, wxID_ANY, wxT("Equivalencias") ), wxVERTICAL );
	
	m_button11 = new wxButton( panel_lectura, wxID_ANY, wxT("Cargar información de equivalencias ..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_button11, 0, wxALL|wxEXPAND, 5 );
	
	progresoEquivalencias = new wxGauge( panel_lectura, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	sbSizer3->Add( progresoEquivalencias, 0, wxALL|wxEXPAND, 5 );
	
	bSizer2->Add( sbSizer3, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( panel_lectura, wxID_ANY, wxT("Calificaciones asignaturas de Universidad del Valle") ), wxVERTICAL );
	
	m_button12 = new wxButton( panel_lectura, wxID_ANY, wxT("Cargar información de registro academico ..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( m_button12, 0, wxALL|wxEXPAND, 5 );
	
	progresoRegistro = new wxGauge( panel_lectura, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	sbSizer4->Add( progresoRegistro, 0, wxALL|wxEXPAND, 5 );
	
	bSizer2->Add( sbSizer4, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( panel_lectura, wxID_ANY, wxT("Puntajes del ECAES") ), wxVERTICAL );
	
	m_button13 = new wxButton( panel_lectura, wxID_ANY, wxT("Cargar información de puntajes de ECAES ..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_button13, 0, wxALL|wxEXPAND, 5 );
	
	progresoECAES = new wxGauge( panel_lectura, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	sbSizer5->Add( progresoECAES, 0, wxALL|wxEXPAND, 5 );
	
	bSizer2->Add( sbSizer5, 1, wxEXPAND, 5 );
	
	panel_lectura->SetSizer( bSizer2 );
	panel_lectura->Layout();
	bSizer2->Fit( panel_lectura );
	m_notebook1->AddPage( panel_lectura, wxT("Lectura de datos"), true );
	panel_filtros = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxString radioBox_filtro_completitudChoices[] = { wxT("Todos los datos"), wxT("Datos completos"), wxT("Datos incompletos") };
	int radioBox_filtro_completitudNChoices = sizeof( radioBox_filtro_completitudChoices ) / sizeof( wxString );
	radioBox_filtro_completitud = new wxRadioBox( panel_filtros, wxID_ANY, wxT("Completitud de los datos"), wxDefaultPosition, wxDefaultSize, radioBox_filtro_completitudNChoices, radioBox_filtro_completitudChoices, 1, wxRA_SPECIFY_COLS );
	radioBox_filtro_completitud->SetSelection( 0 );
	bSizer3->Add( radioBox_filtro_completitud, 0, wxALL|wxEXPAND, 10 );
	
	wxStaticBoxSizer* sbSizer12;
	sbSizer12 = new wxStaticBoxSizer( new wxStaticBox( panel_filtros, wxID_ANY, wxT("Rango de años") ), wxVERTICAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 1, 4, 0, 0 );
	
	m_staticText1 = new wxStaticText( panel_filtros, wxID_ANY, wxT("Desde:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	gSizer1->Add( m_staticText1, 0, wxALIGN_CENTER|wxALL, 5 );
	
	input_fecha_desde = new wxTextCtrl( panel_filtros, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	input_fecha_desde->SetMaxLength( 4 ); 
	gSizer1->Add( input_fecha_desde, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_staticText2 = new wxStaticText( panel_filtros, wxID_ANY, wxT("Hasta:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	gSizer1->Add( m_staticText2, 0, wxALIGN_CENTER|wxALL, 5 );
	
	input_fecha_hasta = new wxTextCtrl( panel_filtros, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( input_fecha_hasta, 0, wxALIGN_CENTER|wxALL, 5 );
	
	sbSizer12->Add( gSizer1, 1, 0, 5 );
	
	bSizer3->Add( sbSizer12, 0, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer14;
	sbSizer14 = new wxStaticBoxSizer( new wxStaticBox( panel_filtros, wxID_ANY, wxT("Lista de asignaturas") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_textCtrl31 = new wxTextCtrl( panel_filtros, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 540,-1 ), 0 );
	fgSizer1->Add( m_textCtrl31, 5, wxALL, 5 );
	
	button_seleccionar_asignaturas = new wxButton( panel_filtros, wxID_ANY, wxT("Seleccionar Asignaturas ..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( button_seleccionar_asignaturas, 1, wxALL, 5 );
	
	sbSizer14->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	bSizer3->Add( sbSizer14, 0, wxALL|wxEXPAND, 5 );
	
	m_panel5 = new wxPanel( panel_filtros, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer3->Add( m_panel5, 1, wxEXPAND | wxALL, 5 );
	
	button_guardar_datos = new wxButton( panel_filtros, wxID_ANY, wxT("Guardar datos aplicando filtos ..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( button_guardar_datos, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	panel_filtros->SetSizer( bSizer3 );
	panel_filtros->Layout();
	bSizer3->Fit( panel_filtros );
	m_notebook1->AddPage( panel_filtros, wxT("Filtros de información"), false );
	panel_grafico = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	panel_grafico->Hide();
	
	m_notebook1->AddPage( panel_grafico, wxT("Grafico"), false );
	panel_resultados = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( panel_resultados, wxID_ANY, wxT("Ponderaciones recomendadas") ), wxVERTICAL );
	
	label_cantidad = new wxStaticText( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	label_cantidad->Wrap( -1 );
	sbSizer8->Add( label_cantidad, 0, wxALL, 5 );
	
	wxGridSizer* gSizer51;
	gSizer51 = new wxGridSizer( 1, 2, 0, 0 );
	
	m_staticText16 = new wxStaticText( panel_resultados, wxID_ANY, wxT("Numero de iteraciones : "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	gSizer51->Add( m_staticText16, 0, wxALL, 5 );
	
	input_numero_iteraciones = new wxTextCtrl( panel_resultados, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE );
	gSizer51->Add( input_numero_iteraciones, 0, wxALL, 5 );
	
	sbSizer8->Add( gSizer51, 0, 0, 5 );
	
	check_mostrar_puntajes_minimos = new wxCheckBox( panel_resultados, wxID_ANY, wxT("Mostrar puntajes minimos"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer8->Add( check_mostrar_puntajes_minimos, 0, wxALL, 5 );
	
	boton_buscar = new wxButton( panel_resultados, wxID_ANY, wxT("Buscar ..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer8->Add( boton_buscar, 0, wxALIGN_LEFT|wxALL, 5 );
	
	grilla_valores = new wxGridSizer( 9, 5, 2, 0 );
	
	input_vacio = new wxStaticText( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	input_vacio->Wrap( -1 );
	grilla_valores->Add( input_vacio, 0, wxALL, 5 );
	
	input_peso = new wxStaticText( panel_resultados, wxID_ANY, wxT("Valor medio peso"), wxDefaultPosition, wxDefaultSize, 0 );
	input_peso->Wrap( -1 );
	grilla_valores->Add( input_peso, 0, wxALL, 5 );
	
	input_d_peso = new wxStaticText( panel_resultados, wxID_ANY, wxT("Desviación típica"), wxDefaultPosition, wxDefaultSize, 0 );
	input_d_peso->Wrap( -1 );
	grilla_valores->Add( input_d_peso, 0, wxALL, 5 );
	
	input_puntaje = new wxStaticText( panel_resultados, wxID_ANY, wxT("Valor medio puntaje"), wxDefaultPosition, wxDefaultSize, 0 );
	input_puntaje->Wrap( -1 );
	grilla_valores->Add( input_puntaje, 0, wxALL, 5 );
	
	input_d_puntaje = new wxStaticText( panel_resultados, wxID_ANY, wxT("Desviación típica"), wxDefaultPosition, wxDefaultSize, 0 );
	input_d_puntaje->Wrap( -1 );
	grilla_valores->Add( input_d_puntaje, 0, wxALL, 5 );
	
	input_lenguaje = new wxStaticText( panel_resultados, wxID_ANY, wxT("Lenguaje : "), wxDefaultPosition, wxDefaultSize, 0 );
	input_lenguaje->Wrap( -1 );
	grilla_valores->Add( input_lenguaje, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPuntajeLenguaje = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPuntajeLenguaje, 0, wxALL, 5 );
	
	inputDPuntajeLenguaje = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPuntajeLenguaje, 0, wxALL, 5 );
	
	inputPonderacionLenguaje = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPonderacionLenguaje, 0, wxALL, 5 );
	
	inputDPonderacionLenguaje = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPonderacionLenguaje, 0, wxALL, 5 );
	
	input_matematica = new wxStaticText( panel_resultados, wxID_ANY, wxT("Matemática : "), wxDefaultPosition, wxDefaultSize, 0 );
	input_matematica->Wrap( -1 );
	grilla_valores->Add( input_matematica, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPuntajeMatematica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPuntajeMatematica, 0, wxALL, 5 );
	
	inputDPuntajeMatematica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPuntajeMatematica, 0, wxALL, 5 );
	
	inputPonderacionMatematica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPonderacionMatematica, 0, wxALL, 5 );
	
	inputDPonderacionMatematica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPonderacionMatematica, 0, wxALL, 5 );
	
	input_ciencias_sociales = new wxStaticText( panel_resultados, wxID_ANY, wxT("Ciencias sociales : "), wxDefaultPosition, wxDefaultSize, 0 );
	input_ciencias_sociales->Wrap( -1 );
	grilla_valores->Add( input_ciencias_sociales, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPuntajeSociales = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPuntajeSociales, 0, wxALL, 5 );
	
	inputDPuntajeSociales = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPuntajeSociales, 0, wxALL, 5 );
	
	inputPonderacionSociales = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPonderacionSociales, 0, wxALL, 5 );
	
	inputDPonderacionSociales = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPonderacionSociales, 0, wxALL, 5 );
	
	input_filosofia = new wxStaticText( panel_resultados, wxID_ANY, wxT("Filosofía :"), wxDefaultPosition, wxDefaultSize, 0 );
	input_filosofia->Wrap( -1 );
	grilla_valores->Add( input_filosofia, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPuntajeFilosofia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPuntajeFilosofia, 0, wxALL, 5 );
	
	inputDPuntajeFilosofia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPuntajeFilosofia, 0, wxALL, 5 );
	
	inputPonderacionFilosofia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPonderacionFilosofia, 0, wxALL, 5 );
	
	inputDPonderacionFilosofia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPonderacionFilosofia, 0, wxALL, 5 );
	
	input_biologia = new wxStaticText( panel_resultados, wxID_ANY, wxT("Biología : "), wxDefaultPosition, wxDefaultSize, 0 );
	input_biologia->Wrap( -1 );
	grilla_valores->Add( input_biologia, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPuntajeBiologia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPuntajeBiologia, 0, wxALL, 5 );
	
	inputDPuntajeBiologia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPuntajeBiologia, 0, wxALL, 5 );
	
	inputPonderacionBiologia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPonderacionBiologia, 0, wxALL, 5 );
	
	inputDPonderacionBiologia = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPonderacionBiologia, 0, wxALL, 5 );
	
	input_quimica = new wxStaticText( panel_resultados, wxID_ANY, wxT("Química : "), wxDefaultPosition, wxDefaultSize, 0 );
	input_quimica->Wrap( -1 );
	grilla_valores->Add( input_quimica, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPuntajeQuimica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPuntajeQuimica, 0, wxALL, 5 );
	
	inputDPuntajeQuimica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPuntajeQuimica, 0, wxALL, 5 );
	
	inputPonderacionQuimica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPonderacionQuimica, 0, wxALL, 5 );
	
	inputDPonderacionQuimica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPonderacionQuimica, 0, wxALL, 5 );
	
	input_fisica = new wxStaticText( panel_resultados, wxID_ANY, wxT("Física : "), wxDefaultPosition, wxDefaultSize, 0 );
	input_fisica->Wrap( -1 );
	grilla_valores->Add( input_fisica, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPuntajeFisica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPuntajeFisica, 0, wxALL, 5 );
	
	inputDPuntajeFisica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPuntajeFisica, 0, wxALL, 5 );
	
	inputPonderacionFisica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPonderacionFisica, 0, wxALL, 5 );
	
	inputDPonderacionFisica = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDPonderacionFisica, 0, wxALL, 5 );
	
	m_staticText13 = new wxStaticText( panel_resultados, wxID_ANY, wxT("Promedio : "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	grilla_valores->Add( m_staticText13, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	inputPromedio = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputPromedio, 0, wxALL, 5 );
	
	inputDesviacionPromedio = new wxTextCtrl( panel_resultados, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	grilla_valores->Add( inputDesviacionPromedio, 0, wxALL, 5 );
	
	sbSizer8->Add( grilla_valores, 1, wxALIGN_RIGHT|wxEXPAND, 5 );
	
	boton_guardarCSV = new wxButton( panel_resultados, wxID_ANY, wxT("Guardar ..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer8->Add( boton_guardarCSV, 0, wxALL, 5 );
	
	panel_resultados->SetSizer( sbSizer8 );
	panel_resultados->Layout();
	sbSizer8->Fit( panel_resultados );
	m_notebook1->AddPage( panel_resultados, wxT("Resultados"), false );
	
	bSizer1->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Connect( salir->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Connect( baseDeDatos->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnBDConfig ) );
	this->Connect( acercaDe->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionAdmisiones ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::CagarPuntajesICFES ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionEquivalencias ), NULL, this );
	m_button12->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionRegistroAcademico ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionECAES ), NULL, this );
	radioBox_filtro_completitud->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnRadioBoxFiltroCompletitud ), NULL, this );
	input_fecha_desde->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::actualizarFiltroFechaInicio ), NULL, this );
	input_fecha_hasta->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::actualizarFiltroFechaFin ), NULL, this );
	button_seleccionar_asignaturas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnButtonSeleccionarAsignaturas ), NULL, this );
	button_guardar_datos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnButtonClickGuardarDatos ), NULL, this );
	panel_grafico->Connect( wxEVT_PAINT, wxPaintEventHandler( GUIFrame::OnPaint ), NULL, this );
	check_mostrar_puntajes_minimos->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::mostar_puntajes_minimos ), NULL, this );
	boton_buscar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::BotonBuscar ), NULL, this );
	boton_guardarCSV->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::BotonBuscar ), NULL, this );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnBDConfig ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionAdmisiones ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::CagarPuntajesICFES ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionEquivalencias ), NULL, this );
	m_button12->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionRegistroAcademico ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::cargarInformacionECAES ), NULL, this );
	radioBox_filtro_completitud->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnRadioBoxFiltroCompletitud ), NULL, this );
	input_fecha_desde->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::actualizarFiltroFechaInicio ), NULL, this );
	input_fecha_hasta->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::actualizarFiltroFechaFin ), NULL, this );
	button_seleccionar_asignaturas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnButtonSeleccionarAsignaturas ), NULL, this );
	button_guardar_datos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnButtonClickGuardarDatos ), NULL, this );
	panel_grafico->Disconnect( wxEVT_PAINT, wxPaintEventHandler( GUIFrame::OnPaint ), NULL, this );
	check_mostrar_puntajes_minimos->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::mostar_puntajes_minimos ), NULL, this );
	boton_buscar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::BotonBuscar ), NULL, this );
	boton_guardarCSV->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::BotonBuscar ), NULL, this );
}