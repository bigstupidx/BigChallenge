struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 73 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//18. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//22. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//23. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//24. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//25. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//26. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//27. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//28. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//29. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//30. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//33. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//34. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//35. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//38. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//39. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//40. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//41. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//42. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//43. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//44. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//45. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//46. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//47. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//48. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//49. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//50. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//51. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//52. EdgeCollider2D
	void RegisterClass_EdgeCollider2D();
	RegisterClass_EdgeCollider2D();

	//53. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//54. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//55. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//56. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//57. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//58. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//59. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//60. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//61. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//62. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//63. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//64. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//65. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//66. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//67. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//68. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//69. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//70. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//71. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//72. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
