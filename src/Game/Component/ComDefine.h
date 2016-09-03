#ifndef _COM_DEFINE_H_
#define _COM_DEFINE_H_

#include "Core/ECS/EntityFu.h"
#include "SpriteCom.h"
#include "PositionCom.h"
#include "VelocityCom.h"
#include "PhysicsCom.h"

/// �����.cpp��ע��
/// Ԥ����ϵͳ���
struct System::Ent
{
	Eid id;
	// BEGIN
	SpriteCom& sprite;
	PositionCom& position;
	VelocityCom& velocity;
	PhysicsCom& physics;
	// END

	Ent(Eid _id);
};

#endif //_COM_DEFINE_H_