/* 
 * 
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Level 2 and Level 3 source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2009 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 * 
 */

#ifndef HK_DYNAMICS2_CONSTRAINT_CALLBACK_UTIL_H
#define HK_DYNAMICS2_CONSTRAINT_CALLBACK_UTIL_H

class hkpConstraint;
struct hkpContactPointAddedEvent;
struct hkpContactPointConfirmedEvent;
struct hkpContactPointRemovedEvent;
struct hkpContactProcessEvent;

#include <Physics/Dynamics/Constraint/hkpConstraintListener.h>


class hkpConstraintCallbackUtil
{
	public:
			/// go through both, the Constraint and the collision listeners
		static void HK_CALL fireConstraintAdded(   hkpConstraintInstance* constraint );
		static void HK_CALL fireConstraintRemoved( hkpConstraintInstance* constraint );
		static void HK_CALL fireConstraintDeleted( hkpConstraintInstance* constraint );
		static void HK_CALL fireConstraintBroken  (  const hkpConstraintBrokenEvent& event ) ;
		static void HK_CALL fireConstraintRepaired(  const hkpConstraintRepairedEvent& event ) ;
};

#endif // HK_DYNAMICS2_CONSTRAINT_CALLBACK_UTIL_H

/*
* Havok SDK - NO SOURCE PC DOWNLOAD, BUILD(#20090704)
* 
* Confidential Information of Havok.  (C) Copyright 1999-2009
* Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
* Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
* rights, and intellectual property rights in the Havok software remain in
* Havok and/or its suppliers.
* 
* Use of this software for evaluation purposes is subject to and indicates
* acceptance of the End User licence Agreement for this product. A copy of
* the license is included with this software and is also available at www.havok.com/tryhavok.
* 
*/
