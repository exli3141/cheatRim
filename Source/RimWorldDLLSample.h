// RimWorldDLLSample.h

#pragma once

using namespace System;
using namespace RimWorld;
using namespace Verse;
using namespace UnityEngine;

namespace RimWorldDLLSample {

	public ref class PerfectShield : public ShieldBelt
	{
		// TODO: ���̃N���X�́A���[�U�[�̃��\�b�h�������ɒǉ����Ă��������B
	private:
		Vector3 OverrideAngle;
	public:
		virtual bool AllowVerbCast(IntVec3, Verse::Map^, LocalTargetInfo) override;
		virtual bool CheckPreAbsorbDamage(DamageInfo) override;
	};
}
