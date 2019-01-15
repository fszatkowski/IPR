///////////////////////////////////////////////////////////
//  CUzytkownik.h
//  Implementation of the Class CUzytkownik
//  Created on:      15-sty-2019 02:12:01
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_4BB22C61_496F_4047_BFF2_655444117CFE__INCLUDED_)
#define EA_4BB22C61_496F_4047_BFF2_655444117CFE__INCLUDED_

#include "CSerial.h"
#include "GCLogowanie.h"
#include "GCEdycjaKonta.h"

class CUzytkownik : public CSerial
{

public:
	CUzytkownik();
	virtual ~CUzytkownik();
	GCLogowanie *m_GCLogowanie;
	GCEdycjaKonta *m_GCEdycjaKonta;

	json deserializuj();
	json serializuj();
	boolean sprawdz_haslo(string haslo);
	boolean zmiana_status();
	boolean zmien_email(string n_email, string haslo);
	void zmien_haslo(string haslo, string n_haslo);

private:
	string email;
	string haslo;
	string imie;
	string nazwisko;

};
#endif // !defined(EA_4BB22C61_496F_4047_BFF2_655444117CFE__INCLUDED_)
