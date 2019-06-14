
// by simon yeung, 26/05/2019
// all rights reserved

#include "../include/typedef.inl"

cbuffer DrawConstantBuffer : register(b0, ENGINE_PER_DRAW_CBV_SPACE)
{
	float4x4	world;
	float4x4	worldViewProj;
};

struct VSInput
{
	float3 pos	: VTX_POSITION0;
	float3 nor	: VTX_NORMAL0;
	float4 biNor: VTX_BINORMAL0;
	float2 uv0	: VTX_UV0;
};

struct VSOutput
{
	float4 pos		: SV_POSITION;
	float3 posWS	: POS_WORLD;
	float3 nor		: NORMAL;
	float3 biNor	: BINORMAL;
	float3 tan		: TANGENT;
	float2 uv		: UV0;
};

VSOutput main(VSInput input_vs)
{
	VSOutput result;
	result.pos	= mul(worldViewProj	, float4(input_vs.pos, 1));
	result.posWS= mul(world			, float4(input_vs.pos, 1)).xyz;
	result.nor	= mul(world			, float4(input_vs.nor, 0)).xyz;
	result.biNor= mul(world			, float4(input_vs.biNor.xyz	, 0)).xyz;
	result.tan	= cross(result.biNor, result.nor) * input_vs.biNor.w;
	result.uv	= input_vs.uv0;
	return result;
}
