#include "ProjectileWeapon.h"

AProjectileWeapon::AProjectileWeapon()
{
	RefireTime = 0.0f;
	LastFireTime = 0.0f;
	NumShots = 0;
	bIsFiring = false;
	DesiredZ = 0.0f;
}