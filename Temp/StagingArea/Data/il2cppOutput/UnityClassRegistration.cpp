template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; template <> void RegisterUnityClass<CapsuleCollider2D>(const char*);
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; 
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; 
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterUnityClass<PhysicsMaterial2D>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterUnityClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterUnityClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 89 non stripped classes
	//0. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//1. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//3. Camera
	RegisterUnityClass<Camera>("Core");
	//4. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//5. Texture
	RegisterUnityClass<Texture>("Core");
	//6. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//7. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//8. GameObject
	RegisterUnityClass<GameObject>("Core");
	//9. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//10. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//11. GameManager
	RegisterUnityClass<GameManager>("Core");
	//12. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//13. Renderer
	RegisterUnityClass<Renderer>("Core");
	//14. Shader
	RegisterUnityClass<Shader>("Core");
	//15. Material
	RegisterUnityClass<Material>("Core");
	//16. Light
	RegisterUnityClass<Light>("Core");
	//17. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//18. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//19. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//20. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//21. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//22. Mesh
	RegisterUnityClass<Mesh>("Core");
	//23. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//24. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//25. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//26. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//27. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//28. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//29. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//30. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//31. Transform
	RegisterUnityClass<Transform>("Core");
	//32. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//33. Sprite
	RegisterUnityClass<Sprite>("Core");
	//34. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//35. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//36. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//37. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//38. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//39. Animator
	RegisterUnityClass<Animator>("Animation");
	//40. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//41. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//42. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//43. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//44. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//45. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//46. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//47. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//48. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//49. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//50. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//51. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//52. TagManager
	RegisterUnityClass<TagManager>("Core");
	//53. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//54. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//55. InputManager
	RegisterUnityClass<InputManager>("Core");
	//56. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//57. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//58. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//59. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//60. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//61. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//62. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//63. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//64. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//65. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//66. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//67. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//68. CloudWebServicesManager
	RegisterUnityClass<CloudWebServicesManager>("CloudWebServices");
	//69. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//70. UnityAnalyticsManager
	RegisterUnityClass<UnityAnalyticsManager>("UnityAnalytics");
	//71. Motion
	RegisterUnityClass<Motion>("Animation");
	//72. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//73. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//74. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//75. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//76. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//77. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//78. Collider
	RegisterUnityClass<Collider>("Physics");
	//79. Animation
	RegisterUnityClass<Animation>("Animation");
	//80. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//81. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//82. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//83. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//84. CapsuleCollider2D
	RegisterUnityClass<CapsuleCollider2D>("Physics2D");
	//85. PhysicsMaterial2D
	RegisterUnityClass<PhysicsMaterial2D>("Physics2D");
	//86. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//87. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//88. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");

}
