/* 
 * 
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Level 2 and Level 3 source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2009 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 * 
 */

#ifndef HK_BASE_SPU_UTIL_H
#define HK_BASE_SPU_UTIL_H

#include <Common/Base/Spu/Spurs/hkSpurs.h>

namespace hkSpuSimulator
{
	class Server;
}

struct hkSpuTaskParams
{
	HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR( HK_MEMORY_CLASS_BASE_CLASS, hkSpuTaskParams );

	void* m_param0;
	void* m_param1;
	void* m_param2;
	void* m_param3;
};

struct hkSpursTasksetParams
{
	HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR( HK_MEMORY_CLASS_BASE_CLASS, hkSpursTasksetParams );

	void* m_param0;
	void* m_param1;
};

struct hkSpuMemoryBin;

	/// Wrapper class for running spus
class hkSpuUtil : public hkReferencedObject
{
	public:

		HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);

			/// You must initialize a CellSpurs instance before calling this function.
		hkSpuUtil( HK_CELL_SPURS* spurs );

			/// This calls quitSpursTaskset
		~hkSpuUtil();

		/// Attach the helper thread created by this utility to SPURS
			/// The helper thread must be attached when you call startSpursTask()
		void attachHelperThreadToSpurs();

			/// Detatch the helper thread created by this utility from SPURS
		void detachHelperThreadFromSpurs();

			/// Use this function to initialize the Havok spurs taskset.
		void initSpursTaskset( int numSpus, hkSpursTasksetParams& params, const char* name );

			/// You must call initSpursTaskset before calling this function.
			/// Use this function to quit the Havok spurs taskset.
		void quitSpursTaskset( );

			/// Start SPURS task, given params and an elf
		void startSpursTask( hkSpuTaskParams& params, const void* elf = HK_NULL );


#if defined(HK_PLATFORM_PS3_PPU)
			/// Internal use only
		void* getMemoryBins();

#endif

	public:

#if defined (HK_PLATFORM_PS3_PPU)

		// SPURS
		CellSpursTaskset*			m_taskset;
		CellSpursTaskExitCode*		m_taskExitCode;

		hkBool						m_helperThreadIsAttached;
		hkBool						m_spursTasksetInitialized;

		hkMemory*					m_memory;
		sys_event_queue_t			m_queueToHelperThread;
		sys_ppu_thread_t			m_helperThreadId;
		hkSpuMemoryBin*				m_bins;

#elif defined (HK_PLATFORM_SIM)

		hkSpuSimulator::Server*		m_spuSimulatorServer;

#endif

};

#endif // HK_BASE_SPU_UTIL_H

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
