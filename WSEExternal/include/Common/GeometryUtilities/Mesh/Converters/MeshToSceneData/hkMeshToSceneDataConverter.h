/* 
 * 
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Level 2 and Level 3 source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2009 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 * 
 */

#ifndef HK_MESH_TO_SCENE_DATA_CONVERTER_H
#define HK_MESH_TO_SCENE_DATA_CONVERTER_H

#include <Common/Base/Math/Util/hkMathUtil.h>

#include <Common/GeometryUtilities/Mesh/hkMeshShape.h>
#include <Common/GeometryUtilities/Mesh/hkMeshVertexBuffer.h>
#include <Common/SceneData/Mesh/hkxVertexDescription.h>

class hkxScene;
class hkxNode;
class hkxMeshSection;
class hkxVertexBuffer;
class hkxIndexBuffer;
class hkxMesh;

class hkMeshSystem;
class hkMeshMaterial;

/// A converter from the Havok hkMeshShape interface to hkx scene data format
class hkMeshToSceneDataConverter
{
    public:
       
            /// Converts a hkMeshBody into a hkxNode 
        static hkxNode* HK_CALL convert(const hkMeshBody* body);

			/// Converts a hkMeshShape into a hkxMesh
		static hkxMesh* HK_CALL convert(const hkMeshShape* shape);

            /// Converts a hkVertexBufferto a hkxVertexBuffer
        static hkxVertexBuffer* HK_CALL convertVertexBuffer( hkMeshVertexBuffer* buf );

			/// Converts the prim data in a hkMeshSection into a hkxIndexBuffer
		static hkxIndexBuffer* HK_CALL convertIndexBuffer(const hkMeshSection* section );

            /// Convert usage value to hkVertexFormat usage type
        static hkxVertexDescription::DataUsage HK_CALL convertUsage(hkVertexFormat::DataUsage usage);

			/// Convert a hkVertexFormat Element desc to hkxVertexDescription::Decl
        static void HK_CALL convertToDecl(const hkVertexFormat::Element& elem, hkUint32 byteOffset, hkxVertexDescription::ElementDecl& decl );

};

#endif // HK_MESH_TO_SCENE_DATA_CONVERTER_H

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
