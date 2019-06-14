
// by simon yeung, 26/05/2019
// all rights reserved

#define SHADER_PER_DRAW_CBV_SPACE				space0
#define ENGINE_PER_DRAW_CBV_SPACE				space1
#define ENGINE_PER_VIEW_CBV_SPACE				space2
#define ENGINE_PER_FRAME_CBV_SPACE				space3
#define SHADER_PER_DRAW_SRV_VS_ONLY_SPACE		space0
#define SHADER_PER_DRAW_SRV_PS_ONLY_SPACE		space1
#define SHADER_PER_DRAW_SRV_ALL_SPACE			space2
#define ENGINE_PER_DRAW_SRV_VS_ONLY_SPACE		space3
#define ENGINE_PER_DRAW_SRV_PS_ONLY_SPACE		space4
#define ENGINE_PER_DRAW_SRV_ALL_SPACE			space5
#define ENGINE_PER_VIEW_SRV_VS_ONLY_SPACE		space6
#define ENGINE_PER_VIEW_SRV_PS_ONLY_SPACE		space7
#define ENGINE_PER_VIEW_SRV_ALL_SPACE			space8
#define ENGINE_PER_FRAME_SRV_VS_ONLY_SPACE		space9
#define ENGINE_PER_FRAME_SRV_PS_ONLY_SPACE		space10
#define ENGINE_PER_FRAME_SRV_ALL_SPACE			space11
#define SHADER_PER_DRAW_UAV_SPACE				space0

#define DECLARE_SAMPLER_STATE					SamplerState	samplerPointClamp		: register(s0);\
												SamplerState	samplerPointWrap		: register(s1);\
												SamplerState	samplerLinearClamp		: register(s2);\
												SamplerState	samplerLinearWrap		: register(s3);\
												SamplerState	samplerTriLinearClamp	: register(s4);\
												SamplerState	samplerTriLinearWrap	: register(s5);\
												SamplerState	samplerAniClamp			: register(s6);\
												SamplerState	samplerAniWrap			: register(s7);
