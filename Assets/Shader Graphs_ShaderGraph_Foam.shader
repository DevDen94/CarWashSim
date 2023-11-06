Shader "Shader Graphs/ShaderGraph_Foam" {
	Properties {
		[NoScaleOffset] FoamMask ("FoamMask", 2D) = "white" {}
		FoamColorA ("FoamColorA", Vector) = (0.7877358,0.9221491,1,1)
		FoamColorB ("FoamColorB", Vector) = (1,1,1,1)
		FoamHeight ("FoamHeight", Float) = 0.1
		NormalMapNoiseScale ("NormalMapNoiseScale", Float) = 300
		[NoScaleOffset] FoamTexture ("FoamTexture", 2D) = "white" {}
		[HideInInspector] _QueueOffset ("_QueueOffset", Float) = 0
		[HideInInspector] _QueueControl ("_QueueControl", Float) = -1
		[HideInInspector] [NoScaleOffset] unity_Lightmaps ("unity_Lightmaps", 2DArray) = "" {}
		[HideInInspector] [NoScaleOffset] unity_LightmapsInd ("unity_LightmapsInd", 2DArray) = "" {}
		[HideInInspector] [NoScaleOffset] unity_ShadowMasks ("unity_ShadowMasks", 2DArray) = "" {}
	}
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType" = "Opaque" }
		LOD 200
		CGPROGRAM
#pragma surface surf Standard
#pragma target 3.0

		struct Input
		{
			float2 uv_MainTex;
		};

		void surf(Input IN, inout SurfaceOutputStandard o)
		{
			o.Albedo = 1;
		}
		ENDCG
	}
	Fallback "Hidden/Shader Graph/FallbackError"
	//CustomEditor "UnityEditor.ShaderGraph.GenericShaderGraphMaterialGUI"
}