// ����� ���C�� DLL �t�@�C���ł��B

#include "stdafx.h"

#include "RimWorldDLLSample.h"

bool RimWorldDLLSample::PerfectShield::AllowVerbCast(IntVec3 vec, Verse::Map^ map, LocalTargetInfo lTarget)
{
	//���ׂ�true��Ԃ����ƂŁA�����ɂ��V�[���h�����𖳌��ɂł���B
	return true;
}

bool RimWorldDLLSample::PerfectShield::CheckPreAbsorbDamage(DamageInfo dInfo)
{
	//Vector3�\���̂�x,y,z��3�̒l���炢�����M��Ȃ��̂�
	OverrideAngle.x = 2.0;
	OverrideAngle.y = 0.0;
	OverrideAngle.z = 2.0;
	dInfo.SetAngle(OverrideAngle);
	dInfo.SetAmount(0);
	this->ShieldBelt::CheckPreAbsorbDamage(dInfo);
	return true;
}
