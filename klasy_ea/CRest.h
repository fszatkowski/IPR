///////////////////////////////////////////////////////////
//  CRest.h
//  Implementation of the Class CRest
//  Created on:      15-sty-2019 02:12:00
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_)
#define EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_

#include "GCWyszukiwanieGracza.h"
#include "GCWyszukiwanieMiasta.h"
#include "GCWyszukiwanieLigi.h"
#include "GCWyszukiwanieDruzyny.h"
#include "CSerial.h"

class CRest
{

public:
	CRest();
	virtual ~CRest();
	GCWyszukiwanieGracza *m_GCWyszukiwanieGracza;
	GCWyszukiwanieMiasta *m_GCWyszukiwanieMiasta;
	GCWyszukiwanieLigi *m_GCWyszukiwanieLigi;
	GCWyszukiwanieDruzyny *m_GCWyszukiwanieDruzyny;
	CSerial *m_CSerial;

	void odbierz_obiekt(json rx);
	boolean sprawdz_haslo(string p_haslo);
	void sprawdz_unikalnosc(string pole, string wartosc);
	void wyslij_obiekt(json tx);

};
#endif // !defined(EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_)
