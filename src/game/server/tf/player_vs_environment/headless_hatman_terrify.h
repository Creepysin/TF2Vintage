#ifndef HEADLESS_HATMAN_BEHAVIOR_H
#define HEADLESS_HATMAN_BEHAVIOR_H
#ifdef _WIN32
#pragma once
#endif


#include "NextBotBehavior.h"
#include "headless_hatman.h"

class CTFPlayer;


class CHeadlessHatmanTerrify : public Action<CHeadlessHatman>
{
public:
	CHeadlessHatmanTerrify();
	virtual ~CHeadlessHatmanTerrify() { };

	virtual const char *GetName( void ) const override;

	virtual ActionResult<CHeadlessHatman> OnStart( CHeadlessHatman *me, Action<CHeadlessHatman> *priorAction ) override;
	virtual ActionResult<CHeadlessHatman> Update( CHeadlessHatman *me, float dt ) override;

private:
	bool IsWearingPumpkinHeadOrSaxtonMask( CTFPlayer *player );

	CountdownTimer m_booDelay;
	CountdownTimer m_stunDelay;
	CountdownTimer m_actionDuration;
};

#endif