// Golan Arms Flechette Weapon

#include "cg_local.h"

/*
-------------------------
FX_FlechetteProjectileThink
-------------------------
*/

void FX_FlechetteProjectileThink( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}
	if (cent->currentState.eFlags  & EF_WP_OPTION_2  )
	{
	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect2, cent->lerpOrigin, forward, -1, -1 );
	}
	else if (cent->currentState.eFlags  & EF_WP_OPTION_3  )
	{
	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect3, cent->lerpOrigin, forward, -1, -1 );
	}
	else if (cent->currentState.eFlags  & EF_WP_OPTION_4  )
	{
	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect4, cent->lerpOrigin, forward, -1, -1 );
	}
	else
	{
	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect, cent->lerpOrigin, forward, -1, -1 );
	}
	
}
void FX_FlechetteProjectileThink2( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}


	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect2, cent->lerpOrigin, forward, -1, -1 );

	
}
void FX_FlechetteProjectileThink3( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}

	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect3, cent->lerpOrigin, forward, -1, -1 );

	
}
void FX_FlechetteProjectileThink4( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}

	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect4, cent->lerpOrigin, forward, -1, -1 );

	
}
/*
-------------------------
FX_FlechetteWeaponHitWall
-------------------------
*/
void FX_FlechetteWeaponHitWall( vec3_t origin, vec3_t normal )
{
	trap_FX_PlayEffectID( cgs.effects.flechetteWallImpactEffect, origin, normal, -1, -1 );
}

/*
-------------------------
FX_FlechetteWeaponHitPlayer
-------------------------
*/
void FX_FlechetteWeaponHitPlayer( vec3_t origin, vec3_t normal, qboolean humanoid )
{
//	if ( humanoid )
//	{
		trap_FX_PlayEffectID( cgs.effects.flechetteFleshImpactEffect, origin, normal, -1, -1 );
//	}
//	else
//	{
//		trap_FX_PlayEffect( "blaster/droid_impact", origin, normal );
//	}
}


/*
-------------------------
FX_FlechetteProjectileThink
-------------------------
*/

void FX_FlechetteAltProjectileThink( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}


	trap_FX_PlayEffectID( cgs.effects.flechetteAltShotEffect, cent->lerpOrigin, forward, -1, -1 );

	
}
void FX_FlechetteAltProjectileThink2( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}

	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect2, cent->lerpOrigin, forward, -1, -1 );

	
}
void FX_FlechetteAltProjectileThink3( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}

	trap_FX_PlayEffectID( cgs.effects.flechetteShotEffect3, cent->lerpOrigin, forward, -1, -1 );

	
}
void FX_FlechetteAltProjectileThink4( centity_t *cent, const struct weaponInfo_s *weapon )
{
	vec3_t forward;

	if ( VectorNormalize2( cent->currentState.pos.trDelta, forward ) == 0.0f )
	{
		forward[2] = 1.0f;
	}

	trap_FX_PlayEffectID( cgs.effects.flechetteotherAltShotEffect, cent->lerpOrigin, forward, -1, -1 );

	
}