/* 
 * 
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Level 2 and Level 3 source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2009 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 * 
 */

#ifndef HK_BROAD_PHASE_BORDER_LISTENER
#define HK_BROAD_PHASE_BORDER_LISTENER

#include <Common/Base/Object/hkReferencedObject.h>
#include <Physics/Collide/Dispatch/BroadPhase/hkpBroadPhaseListener.h>

	// This class is used internally by hkpWorld to dispatch broadphase pairs to the relevant border phantoms.
class hkpBroadPhaseBorderListener : public hkReferencedObject, public hkpBroadPhaseListener
{
	public:

		HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
	
		hkpBroadPhaseBorderListener() {}

			// Adds the collision pair elements A and B if they are phantoms
		virtual void addCollisionPair( hkpTypedBroadPhaseHandlePair& pair );

			// Removes the collision pair elements A and B if they are phantoms
		virtual void removeCollisionPair( hkpTypedBroadPhaseHandlePair& pair );
};


#endif // HK_BROAD_PHASE_BORDER_LISTENER

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
