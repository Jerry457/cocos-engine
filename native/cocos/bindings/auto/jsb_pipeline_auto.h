// clang-format off

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

/****************************************************************************
 Copyright (c) 2022-2023 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#pragma once
#include "bindings/jswrapper/SeApi.h"
#include "bindings/manual/jsb_conversions.h"
#include "renderer/pipeline/forward/ForwardPipeline.h"
#include "renderer/pipeline/forward/ForwardFlow.h"
#include "renderer/pipeline/forward/ForwardStage.h"
#include "renderer/pipeline/shadow/ShadowFlow.h"
#include "renderer/pipeline/shadow/ShadowStage.h"
#include "renderer/pipeline/shadow/CSMLayers.h"
#include "renderer/pipeline/GlobalDescriptorSetManager.h"
#include "renderer/pipeline/InstancedBuffer.h"
#include "renderer/pipeline/deferred/DeferredPipeline.h"
#include "renderer/pipeline/deferred/MainFlow.h"
#include "renderer/pipeline/deferred/GbufferStage.h"
#include "renderer/pipeline/deferred/LightingStage.h"
#include "renderer/pipeline/deferred/BloomStage.h"
#include "renderer/pipeline/deferred/PostProcessStage.h"
#include "renderer/pipeline/PipelineSceneData.h"
#include "renderer/pipeline/BatchedBuffer.h"
#include "renderer/pipeline/GeometryRenderer.h"
#include "renderer/pipeline/DebugView.h"
#include "renderer/pipeline/reflection-probe/ReflectionProbeFlow.h"
#include "renderer/pipeline/reflection-probe/ReflectionProbeStage.h"



bool register_all_pipeline(se::Object* obj);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::SkinningJointCapacity);
extern se::Object *__jsb_cc_pipeline_SkinningJointCapacity_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_SkinningJointCapacity_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderObject);
extern se::Object *__jsb_cc_pipeline_RenderObject_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderObject_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderObject * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderTargetInfo);
extern se::Object *__jsb_cc_pipeline_RenderTargetInfo_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderTargetInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderTargetInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderPass);
extern se::Object *__jsb_cc_pipeline_RenderPass_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderPass_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderPass * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderPassDesc);
extern se::Object *__jsb_cc_pipeline_RenderPassDesc_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderPassDesc_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderPassDesc * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderTextureDesc);
extern se::Object *__jsb_cc_pipeline_RenderTextureDesc_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderTextureDesc_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderTextureDesc * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::FrameBufferDesc);
extern se::Object *__jsb_cc_pipeline_FrameBufferDesc_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_FrameBufferDesc_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::FrameBufferDesc * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::InternalBindingDesc);
extern se::Object *__jsb_cc_pipeline_InternalBindingDesc_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_InternalBindingDesc_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::InternalBindingDesc * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::InternalBindingInst);
extern se::Object *__jsb_cc_pipeline_InternalBindingInst_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_InternalBindingInst_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::InternalBindingInst * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderQueueCreateInfo);
extern se::Object *__jsb_cc_pipeline_RenderQueueCreateInfo_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderQueueCreateInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderQueueCreateInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderQueueDesc);
extern se::Object *__jsb_cc_pipeline_RenderQueueDesc_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderQueueDesc_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOLocalBatched);
extern se::Object *__jsb_cc_pipeline_UBOLocalBatched_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOLocalBatched_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOLocalBatched * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOLocal);
extern se::Object *__jsb_cc_pipeline_UBOLocal_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOLocal_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOLocal * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOWorldBound);
extern se::Object *__jsb_cc_pipeline_UBOWorldBound_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOWorldBound_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOWorldBound * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOForwardLight);
extern se::Object *__jsb_cc_pipeline_UBOForwardLight_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOForwardLight_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOForwardLight * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBODeferredLight);
extern se::Object *__jsb_cc_pipeline_UBODeferredLight_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBODeferredLight_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBODeferredLight * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOSkinningTexture);
extern se::Object *__jsb_cc_pipeline_UBOSkinningTexture_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOSkinningTexture_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOSkinningTexture * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOSkinningAnimation);
extern se::Object *__jsb_cc_pipeline_UBOSkinningAnimation_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOSkinningAnimation_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOSkinningAnimation * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOSkinning);
extern se::Object *__jsb_cc_pipeline_UBOSkinning_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOSkinning_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOSkinning * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOMorph);
extern se::Object *__jsb_cc_pipeline_UBOMorph_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOMorph_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOMorph * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOUILocal);
extern se::Object *__jsb_cc_pipeline_UBOUILocal_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOUILocal_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOUILocal * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOSH);
extern se::Object *__jsb_cc_pipeline_UBOSH_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOSH_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOSH * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOGlobal);
extern se::Object *__jsb_cc_pipeline_UBOGlobal_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOGlobal_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOGlobal * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOCamera);
extern se::Object *__jsb_cc_pipeline_UBOCamera_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOCamera_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOCamera * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOShadow);
extern se::Object *__jsb_cc_pipeline_UBOShadow_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOShadow_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOShadow * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::UBOCSM);
extern se::Object *__jsb_cc_pipeline_UBOCSM_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_UBOCSM_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::UBOCSM * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::DescriptorSetLayoutInfos);
extern se::Object *__jsb_cc_pipeline_DescriptorSetLayoutInfos_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_DescriptorSetLayoutInfos_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::DescriptorSetLayoutInfos * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::SHADOWMAP);
extern se::Object *__jsb_cc_pipeline_SHADOWMAP_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_SHADOWMAP_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::SHADOWMAP * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ENVIRONMENT);
extern se::Object *__jsb_cc_pipeline_ENVIRONMENT_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ENVIRONMENT_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::ENVIRONMENT * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::SPOTSHADOWMAP);
extern se::Object *__jsb_cc_pipeline_SPOTSHADOWMAP_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_SPOTSHADOWMAP_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::SPOTSHADOWMAP * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::DIFFUSEMAP);
extern se::Object *__jsb_cc_pipeline_DIFFUSEMAP_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_DIFFUSEMAP_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::DIFFUSEMAP * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::JOINTTEXTURE);
extern se::Object *__jsb_cc_pipeline_JOINTTEXTURE_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_JOINTTEXTURE_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::JOINTTEXTURE * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::REALTIMEJOINTTEXTURE);
extern se::Object *__jsb_cc_pipeline_REALTIMEJOINTTEXTURE_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_REALTIMEJOINTTEXTURE_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::REALTIMEJOINTTEXTURE * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::POSITIONMORPH);
extern se::Object *__jsb_cc_pipeline_POSITIONMORPH_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_POSITIONMORPH_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::POSITIONMORPH * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::NORMALMORPH);
extern se::Object *__jsb_cc_pipeline_NORMALMORPH_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_NORMALMORPH_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::NORMALMORPH * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::TANGENTMORPH);
extern se::Object *__jsb_cc_pipeline_TANGENTMORPH_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_TANGENTMORPH_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::TANGENTMORPH * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::LIGHTMAPTEXTURE);
extern se::Object *__jsb_cc_pipeline_LIGHTMAPTEXTURE_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_LIGHTMAPTEXTURE_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::LIGHTMAPTEXTURE * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::SPRITETEXTURE);
extern se::Object *__jsb_cc_pipeline_SPRITETEXTURE_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_SPRITETEXTURE_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::SPRITETEXTURE * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::REFLECTIONTEXTURE);
extern se::Object *__jsb_cc_pipeline_REFLECTIONTEXTURE_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_REFLECTIONTEXTURE_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::REFLECTIONTEXTURE * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::REFLECTIONSTORAGE);
extern se::Object *__jsb_cc_pipeline_REFLECTIONSTORAGE_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_REFLECTIONSTORAGE_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::REFLECTIONSTORAGE * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::REFLECTIONPROBECUBEMAP);
extern se::Object *__jsb_cc_pipeline_REFLECTIONPROBECUBEMAP_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_REFLECTIONPROBECUBEMAP_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::REFLECTIONPROBECUBEMAP * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::REFLECTIONPROBEPLANARMAP);
extern se::Object *__jsb_cc_pipeline_REFLECTIONPROBEPLANARMAP_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_REFLECTIONPROBEPLANARMAP_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::REFLECTIONPROBEPLANARMAP * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderPipelineInfo);
extern se::Object *__jsb_cc_pipeline_RenderPipelineInfo_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderPipelineInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderPipelineInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderPipeline);
extern se::Object *__jsb_cc_pipeline_RenderPipeline_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderPipeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderFlowInfo);
extern se::Object *__jsb_cc_pipeline_RenderFlowInfo_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderFlowInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderFlowInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderFlow);
extern se::Object *__jsb_cc_pipeline_RenderFlow_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderFlow_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderStageInfo);
extern se::Object *__jsb_cc_pipeline_RenderStageInfo_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderStageInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderStageInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderStage);
extern se::Object *__jsb_cc_pipeline_RenderStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderStage_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::DebugView);
extern se::Object *__jsb_cc_pipeline_DebugView_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_DebugView_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ForwardPipeline);
extern se::Object *__jsb_cc_pipeline_ForwardPipeline_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ForwardPipeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ForwardFlow);
extern se::Object *__jsb_cc_pipeline_ForwardFlow_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ForwardFlow_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ForwardStage);
extern se::Object *__jsb_cc_pipeline_ForwardStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ForwardStage_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ShadowFlow);
extern se::Object *__jsb_cc_pipeline_ShadowFlow_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ShadowFlow_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ShadowStage);
extern se::Object *__jsb_cc_pipeline_ShadowStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ShadowStage_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ShadowTransformInfo);
extern se::Object *__jsb_cc_pipeline_ShadowTransformInfo_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ShadowTransformInfo_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::CSMLayerInfo);
extern se::Object *__jsb_cc_pipeline_CSMLayerInfo_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_CSMLayerInfo_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::CSMLayers);
extern se::Object *__jsb_cc_pipeline_CSMLayers_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_CSMLayers_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::GlobalDSManager);
extern se::Object *__jsb_cc_pipeline_GlobalDSManager_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_GlobalDSManager_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::InstancedItem);
extern se::Object *__jsb_cc_pipeline_InstancedItem_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_InstancedItem_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::InstancedItem * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::InstancedBuffer);
extern se::Object *__jsb_cc_pipeline_InstancedBuffer_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_InstancedBuffer_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::DeferredPipeline);
extern se::Object *__jsb_cc_pipeline_DeferredPipeline_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_DeferredPipeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::MainFlow);
extern se::Object *__jsb_cc_pipeline_MainFlow_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_MainFlow_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::GbufferStage);
extern se::Object *__jsb_cc_pipeline_GbufferStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_GbufferStage_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::RenderElem);
extern se::Object *__jsb_cc_pipeline_RenderElem_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_RenderElem_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderElem * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::LightingStage);
extern se::Object *__jsb_cc_pipeline_LightingStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_LightingStage_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::BloomStage);
extern se::Object *__jsb_cc_pipeline_BloomStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_BloomStage_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::PostProcessStage);
extern se::Object *__jsb_cc_pipeline_PostProcessStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_PostProcessStage_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::PipelineSceneData);
extern se::Object *__jsb_cc_pipeline_PipelineSceneData_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_PipelineSceneData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::BatchedItem);
extern se::Object *__jsb_cc_pipeline_BatchedItem_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_BatchedItem_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::BatchedItem * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::BatchedBuffer);
extern se::Object *__jsb_cc_pipeline_BatchedBuffer_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_BatchedBuffer_class; // NOLINT

#if CC_USE_GEOMETRY_RENDERER

JSB_REGISTER_OBJECT_TYPE(cc::pipeline::GeometryRenderer);
extern se::Object *__jsb_cc_pipeline_GeometryRenderer_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_GeometryRenderer_class; // NOLINT

#endif // CC_USE_GEOMETRY_RENDERER

JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ReflectionProbeFlow);
extern se::Object *__jsb_cc_pipeline_ReflectionProbeFlow_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ReflectionProbeFlow_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::pipeline::ReflectionProbeStage);
extern se::Object *__jsb_cc_pipeline_ReflectionProbeStage_proto; // NOLINT
extern se::Class * __jsb_cc_pipeline_ReflectionProbeStage_class; // NOLINT

// clang-format on
