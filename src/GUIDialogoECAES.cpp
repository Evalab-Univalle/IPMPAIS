///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUIDialogoECAES.h"

///////////////////////////////////////////////////////////////////////////

GUIDialogoEcaes::GUIDialogoEcaes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxSize( -1,600 ) );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer15;
	sbSizer15 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Componentes") ), wxVERTICAL );
	
	wxGridSizer* gSizer8;
	gSizer8 = new wxGridSizer( 2, 1, 0, 0 );
	
	m_checkComponente1 = new wxCheckBox( this, wxID_ANY, wxT("Componente 1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkComponente1->SetValue(true); 
	gSizer8->Add( m_checkComponente1, 0, wxALL, 5 );
	
	m_checkComponente2 = new wxCheckBox( this, wxID_ANY, wxT("Componente 2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkComponente2->SetValue(true); 
	gSizer8->Add( m_checkComponente2, 0, wxALL, 5 );
	
	m_checkComponente3 = new wxCheckBox( this, wxID_ANY, wxT("Componente 3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkComponente3->SetValue(true); 
	gSizer8->Add( m_checkComponente3, 0, wxALL, 5 );
	
	m_checkComponente4 = new wxCheckBox( this, wxID_ANY, wxT("Componente 4"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkComponente4->SetValue(true); 
	gSizer8->Add( m_checkComponente4, 0, wxALL, 5 );
	
	m_checkComponente5 = new wxCheckBox( this, wxID_ANY, wxT("Componente 5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkComponente5->SetValue(true); 
	gSizer8->Add( m_checkComponente5, 0, wxALL, 5 );
	
	m_checkComponente6 = new wxCheckBox( this, wxID_ANY, wxT("Componente 6"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkComponente6->SetValue(true); 
	gSizer8->Add( m_checkComponente6, 0, wxALL, 5 );
	
	m_checkComponente7 = new wxCheckBox( this, wxID_ANY, wxT("Componente 7"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkComponente7->SetValue(true); 
	gSizer8->Add( m_checkComponente7, 0, wxALL, 5 );
	
	sbSizer15->Add( gSizer8, 1, wxEXPAND, 5 );
	
	bSizer4->Add( sbSizer15, 2, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer14;
	sbSizer14 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Competencias") ), wxVERTICAL );
	
	wxGridSizer* gSizer9;
	gSizer9 = new wxGridSizer( 2, 1, 0, 0 );
	
	m_checkBoxCompetencia = new wxCheckBox( this, wxID_ANY, wxT("Competencia 1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxCompetencia->SetValue(true); 
	gSizer9->Add( m_checkBoxCompetencia, 0, wxALL, 5 );
	
	m_checkBoxCompetencia2 = new wxCheckBox( this, wxID_ANY, wxT("Competencia 2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxCompetencia2->SetValue(true); 
	gSizer9->Add( m_checkBoxCompetencia2, 0, wxALL, 5 );
	
	m_checkBoxCompetencia3 = new wxCheckBox( this, wxID_ANY, wxT("Competencia 3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxCompetencia3->SetValue(true); 
	gSizer9->Add( m_checkBoxCompetencia3, 0, wxALL, 5 );
	
	sbSizer14->Add( gSizer9, 1, 0, 5 );
	
	bSizer4->Add( sbSizer14, 1, 0, 5 );
	
	m_buttonAceptar = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_buttonAceptar, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	this->SetSizer( bSizer4 );
	this->Layout();
	bSizer4->Fit( this );
}

GUIDialogoEcaes::~GUIDialogoEcaes()
{
}
