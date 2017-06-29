// これは メイン DLL ファイルです。

#include "stdafx.h"

#include "RimWorldDLLSample.h"

bool RimWorldDLLSample::PerfectShield::AllowVerbCast(IntVec3 vec, Verse::Map^ map, LocalTargetInfo lTarget)
{
	//すべてtrueを返すことで、距離によるシールド条件を無効にできる。
	return true;
}

bool RimWorldDLLSample::PerfectShield::CheckPreAbsorbDamage(DamageInfo dInfo)
{
	//Vector3構造体はx,y,zの3つの値くらいしか弄れないので
	OverrideAngle.x = 2.0;
	OverrideAngle.y = 0.0;
	OverrideAngle.z = 2.0;
	dInfo.SetAngle(OverrideAngle);
	dInfo.SetAmount(0);
	this->ShieldBelt::CheckPreAbsorbDamage(dInfo);
	return true;
}
