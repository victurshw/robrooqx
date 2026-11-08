#pragma once
#include <cstdint>

inline constexpr const char* kRobloxVersion = "version-11f155f3450f4c8e";

struct TaskScheduler {
    inline static constexpr uintptr_t Pointer = 0x8D71348;
    inline static constexpr uintptr_t JobStart = 0xC8;
    inline static constexpr uintptr_t JobEnd = 0xD0;
    inline static constexpr uintptr_t JobName = 0x18;
    inline static constexpr uintptr_t MaxFPS = 0xB0;
};

struct VisualEngine {
    inline static constexpr uintptr_t Pointer = 0x884C2E0;
    inline static constexpr uintptr_t Dimensions = 0xB10;
    inline static constexpr uintptr_t ViewMatrix = 0x1B0;
    inline static constexpr uintptr_t RenderView = 0xC38;
    inline static constexpr uintptr_t FakeDataModel = 0xAF0;
};

struct FakeDataModel {
    inline static constexpr uintptr_t Pointer = 0x8DC8000;
    inline static constexpr uintptr_t RealDataModel = 0x1F8;
};

struct RenderView {
    inline static constexpr uintptr_t LightingValid = 0x0;
    inline static constexpr uintptr_t SkyValid = 0x0;
    inline static constexpr uintptr_t VisualEngine = 0x0;
    inline static constexpr uintptr_t DeviceD3D11 = 0x0;
};

struct ScriptContext {
    inline static constexpr uintptr_t RequireBypass = 0x0;
};

struct ModuleScript {
    inline static constexpr uintptr_t IsCoreScript = 0x0;
    inline static constexpr uintptr_t GUID = 0xC0;
    inline static constexpr uintptr_t Hash = 0x350;
    inline static constexpr uintptr_t ByteCode = 0x0;
};

struct MouseService {
    inline static constexpr uintptr_t SensitivityPointer = 0x0;
    inline static constexpr uintptr_t InputObject = 0xE0;
    inline static constexpr uintptr_t InputObject2 = 0xF0;
    inline static constexpr uintptr_t MousePosition = 0xC4;
};

struct PlayerConfigurer {
    inline static constexpr uintptr_t Pointer = 0x0;
};

struct Instance {
    inline static constexpr uintptr_t This = 0x8;
    inline static constexpr uintptr_t NameContainer = 0x70;
    inline static constexpr uintptr_t Name = 0x8;
    inline static constexpr uintptr_t ChildrenStart = 0x78;
    inline static constexpr uintptr_t ChildrenEnd = 0x8;
    inline static constexpr uintptr_t Parent = 0x68;
    inline static constexpr uintptr_t ClassDescriptor = 0x18;
    inline static constexpr uintptr_t ClassName = 0x8;
    inline static constexpr uintptr_t ClassBase = 0x1B0;
};

struct Misc {
    inline static constexpr uintptr_t StringLength = 0x10;
    inline static constexpr uintptr_t Adornee = 0xE0;
    inline static constexpr uintptr_t Value = 0xA8;
    inline static constexpr uintptr_t AnimationId = 0xB0;
};

struct DataModel {
    inline static constexpr uintptr_t PlaceId = 0x188;
    inline static constexpr uintptr_t GameId = 0x180;
    inline static constexpr uintptr_t CreatorId = 0x178;
    inline static constexpr uintptr_t GameLoaded = 0x5D0;
    inline static constexpr uintptr_t JobId = 0x110;
    inline static constexpr uintptr_t Workspace = 0x150;
    inline static constexpr uintptr_t ScriptContext = 0x440;
    inline static constexpr uintptr_t PlaceVersion = 0x1A4;
    inline static constexpr uintptr_t ServerIP = 0x5B8;
    inline static constexpr uintptr_t ToRenderView1 = 0x1C0;
    inline static constexpr uintptr_t ToRenderView2 = 0x8;
    inline static constexpr uintptr_t ToRenderView3 = 0x28;
    inline static constexpr uintptr_t PrimitiveCount = 0x418;
};

struct RunService {
    inline static constexpr uintptr_t HeartbeatTask = 0xE0;
    inline static constexpr uintptr_t HeartbeatFPS = 0xC8;
};

struct RenderJob {
    inline static constexpr uintptr_t RenderView = 0x1E0;
    inline static constexpr uintptr_t FakeDataModel = 0x38;
    inline static constexpr uintptr_t RealDataModel = 0x1F0;
};

struct Workspace {
    inline static constexpr uintptr_t World = 0x400;
    inline static constexpr uintptr_t ReadOnlyGravity = 0x9C8;
    inline static constexpr uintptr_t DistributedGameTime = 0x4C8;
    inline static constexpr uintptr_t CurrentCamera = 0x4A8;
};

struct World {
    inline static constexpr uintptr_t Gravity = 0x220;
    inline static constexpr uintptr_t worldStepsPerSec = 0x880;
    inline static constexpr uintptr_t FallenPartsDestroyHeight = 0x214;
    inline static constexpr uintptr_t AirProperties = 0x238;
    inline static constexpr uintptr_t Primitives = 0x2C8;
};

struct AirProperties {
    inline static constexpr uintptr_t AirDensity = 0x18;
    inline static constexpr uintptr_t GlobalWind = 0x3C;
};

struct Terrain {
    inline static constexpr uintptr_t GrassLength = 0x1E0;
    inline static constexpr uintptr_t WaterReflectance = 0x1E8;
    inline static constexpr uintptr_t WaterTransparency = 0x1EC;
    inline static constexpr uintptr_t WaterWaveSize = 0x1F0;
    inline static constexpr uintptr_t WaterWaveSpeed = 0x1F4;
    inline static constexpr uintptr_t WaterColor = 0x1D0;
    inline static constexpr uintptr_t MaterialColors = 0x4A8;
};

struct MaterialColors {
    inline static constexpr uintptr_t Asphalt = 0x30;
    inline static constexpr uintptr_t Basalt = 0x27;
    inline static constexpr uintptr_t Brick = 0xF;
    inline static constexpr uintptr_t Cobblestone = 0x33;
    inline static constexpr uintptr_t Concrete = 0xC;
    inline static constexpr uintptr_t CrackedLava = 0x2D;
    inline static constexpr uintptr_t Glacier = 0x1B;
    inline static constexpr uintptr_t Grass = 0x6;
    inline static constexpr uintptr_t Ground = 0x2A;
    inline static constexpr uintptr_t Ice = 0x36;
    inline static constexpr uintptr_t LeafyGrass = 0x39;
    inline static constexpr uintptr_t Limestone = 0x3F;
    inline static constexpr uintptr_t Mud = 0x24;
    inline static constexpr uintptr_t Pavement = 0x42;
    inline static constexpr uintptr_t Rock = 0x18;
    inline static constexpr uintptr_t Salt = 0x3C;
    inline static constexpr uintptr_t Sand = 0x12;
    inline static constexpr uintptr_t Sandstone = 0x21;
    inline static constexpr uintptr_t Slate = 0x9;
    inline static constexpr uintptr_t Snow = 0x1E;
    inline static constexpr uintptr_t WoodPlanks = 0x15;
};

struct Sound {
    inline static constexpr uintptr_t SoundId = 0xB8;
    inline static constexpr uintptr_t RollOffMaxDistance = 0x110;
    inline static constexpr uintptr_t RollOffMinDistance = 0x114;
    inline static constexpr uintptr_t PlaybackSpeed = 0x10C;
    inline static constexpr uintptr_t Volume = 0x120;
    inline static constexpr uintptr_t SoundGroup = 0xD8;
    inline static constexpr uintptr_t IsPlaying = 0x130;
    inline static constexpr uintptr_t Looped = 0x12D;
};

struct SpawnLocation {
    inline static constexpr uintptr_t AllowTeamChangeOnTouch = 0x3D;
    inline static constexpr uintptr_t Enabled = 0x1E1;
    inline static constexpr uintptr_t Neutral = 0x1E2;
    inline static constexpr uintptr_t ForcefieldDuration = 0x1D8;
    inline static constexpr uintptr_t TeamColor = 0x1DC;
};

struct SurfaceAppearance {
    inline static constexpr uintptr_t AlphaMode = 0x1E0;
    inline static constexpr uintptr_t Color = 0x1C8;
    inline static constexpr uintptr_t ColorMap = 0xB8;
    inline static constexpr uintptr_t EmissiveMaskContent = 0xE8;
    inline static constexpr uintptr_t EmissiveStrength = 0x1E4;
    inline static constexpr uintptr_t EmissiveTint = 0x1D4;
    inline static constexpr uintptr_t MetalnessMap = 0x118;
    inline static constexpr uintptr_t NormalMap = 0x148;
    inline static constexpr uintptr_t RoughnessMap = 0x178;
};

struct ParticleEmitter {
    inline static constexpr uintptr_t Brightness = 0x20C;
    inline static constexpr uintptr_t LightEmission = 0x228;
    inline static constexpr uintptr_t LightInfluence = 0x22C;
    inline static constexpr uintptr_t Texture = 0x1B0;
    inline static constexpr uintptr_t ZOffset = 0x254;
    inline static constexpr uintptr_t Lifetime = 0x1E4;
    inline static constexpr uintptr_t Rate = 0x238;
    inline static constexpr uintptr_t Rotation = 0x1F4;
    inline static constexpr uintptr_t RotSpeed = 0x1EC;
    inline static constexpr uintptr_t Speed = 0x1FC;
    inline static constexpr uintptr_t SpreadAngle = 0x204;
    inline static constexpr uintptr_t Acceleration = 0x1D0;
    inline static constexpr uintptr_t Drag = 0x210;
    inline static constexpr uintptr_t TimeScale = 0x24C;
    inline static constexpr uintptr_t VelocityInheritance = 0x250;
};

struct Beam {
    inline static constexpr uintptr_t Brightness = 0x170;
    inline static constexpr uintptr_t LightEmission = 0x17C;
    inline static constexpr uintptr_t LightInfluence = 0x180;
    inline static constexpr uintptr_t Texture = 0x130;
    inline static constexpr uintptr_t TextureLength = 0x18C;
    inline static constexpr uintptr_t TextureSpeed = 0x194;
    inline static constexpr uintptr_t ZOffset = 0x1A0;
    inline static constexpr uintptr_t Attachment0 = 0x150;
    inline static constexpr uintptr_t Attachment1 = 0x160;
    inline static constexpr uintptr_t CurveSize0 = 0x174;
    inline static constexpr uintptr_t CurveSize1 = 0x178;
    inline static constexpr uintptr_t Width0 = 0x198;
    inline static constexpr uintptr_t Width1 = 0x19C;
};

struct Player {
    inline static constexpr uintptr_t LocalPlayer = 0x120;
    inline static constexpr uintptr_t UserId = 0xC0;
    inline static constexpr uintptr_t DisplayName = 0x128;
    inline static constexpr uintptr_t HealthDisplayDistance = 0x394;
    inline static constexpr uintptr_t NameDisplayDistance = 0x3A4;
    inline static constexpr uintptr_t ModelInstance = 0x298;
    inline static constexpr uintptr_t Team = 0x2D8;
    inline static constexpr uintptr_t TeamColor = 0x3B0;
    inline static constexpr uintptr_t LocaleId = 0x108;
    inline static constexpr uintptr_t AccountAge = 0x35C;
    inline static constexpr uintptr_t MinZoomDistance = 0x36C;
    inline static constexpr uintptr_t MaxZoomDistance = 0x368;
    inline static constexpr uintptr_t CameraMode = 0x370;
    inline static constexpr uintptr_t Mouse = 0x1218;
};

struct Team {
    inline static constexpr uintptr_t BrickColor = 0xA8;
};

struct Humanoid {
    inline static constexpr uintptr_t Health = 0x18C;
    inline static constexpr uintptr_t MaxHealth = 0x1A4;
    inline static constexpr uintptr_t Walkspeed = 0x1CC;
    inline static constexpr uintptr_t WalkspeedCheck = 0x3A4;
    inline static constexpr uintptr_t JumpPower = 0x1A0;
    inline static constexpr uintptr_t JumpHeight = 0x19C;
    inline static constexpr uintptr_t HipHeight = 0x190;
    inline static constexpr uintptr_t MaxSlopeAngle = 0x1A8;
    inline static constexpr uintptr_t SeatPart = 0xF8;
    inline static constexpr uintptr_t HumanoidRootPart = 0x468;
    inline static constexpr uintptr_t CameraOffset = 0x118;
    inline static constexpr uintptr_t HealthDisplayDistance = 0x184;
    inline static constexpr uintptr_t NameDisplayDistance = 0x1AC;
    inline static constexpr uintptr_t DisplayDistanceType = 0x17C;
    inline static constexpr uintptr_t HealthDisplayType = 0x188;
    inline static constexpr uintptr_t NameOcclusion = 0x1B0;
    inline static constexpr uintptr_t DisplayName = 0xA8;
    inline static constexpr uintptr_t MoveDirection = 0x13C;
    inline static constexpr uintptr_t RigType = 0x1BC;
    inline static constexpr uintptr_t Jump = 0x1D7;
    inline static constexpr uintptr_t Sit = 0x1DA;
    inline static constexpr uintptr_t PlatformStand = 0x1D9;
    inline static constexpr uintptr_t UseJumpPower = 0x1DD;
    inline static constexpr uintptr_t AutomaticScalingEnabled = 0x1D2;
    inline static constexpr uintptr_t BreakJointsOnDeath = 0xD5;
    inline static constexpr uintptr_t EvaluateStateMachine = 0x1D4;
    inline static constexpr uintptr_t RequiresNeck = 0x1DA;
    inline static constexpr uintptr_t AutoJumpEnabled = 0x1D0;
    inline static constexpr uintptr_t AutoRotate = 0x1D1;
    inline static constexpr uintptr_t IsWalking = 0xA2F;
    inline static constexpr uintptr_t MoveToPoint = 0x160;
    inline static constexpr uintptr_t MoveToPart = 0x108;
    inline static constexpr uintptr_t WalkTimer = 0x3F0;
    inline static constexpr uintptr_t HumanoidState = 0x8B0;
    inline static constexpr uintptr_t HumanoidStateID = 0x20;
    inline static constexpr uintptr_t FloorMaterial = 0x180;
    inline static constexpr uintptr_t TargetPoint = 0x148;
    inline static constexpr uintptr_t PlatformStatePointer = 0x9387705E;
};

struct Seat {
    inline static constexpr uintptr_t Occupant = 0x208;
};

struct VehicleSeat {
    inline static constexpr uintptr_t MaxSpeed = 0x218;
    inline static constexpr uintptr_t SteerFloat = 0x21C;
    inline static constexpr uintptr_t ThrottleFloat = 0x220;
    inline static constexpr uintptr_t Torque = 0x224;
    inline static constexpr uintptr_t TurnSpeed = 0x228;
};

struct StatsItem {
    inline static constexpr uintptr_t Value = 0x500;
};

struct Tool {
    inline static constexpr uintptr_t Tooltip = 0x458;
    inline static constexpr uintptr_t TextureId = 0x350;
    inline static constexpr uintptr_t Grip = 0x49C;
    inline static constexpr uintptr_t Enabled = 0x4A9;
    inline static constexpr uintptr_t CanBeDropped = 0x4A8;
    inline static constexpr uintptr_t ManualActivationOnly = 0x4AA;
    inline static constexpr uintptr_t RequiresHandle = 0x4AB;
};

struct Clothing {
    inline static constexpr uintptr_t Template = 0xF0;
    inline static constexpr uintptr_t Color3 = 0x110;
};

struct CharacterMesh {
    inline static constexpr uintptr_t BaseTextureId = 0xB8;
    inline static constexpr uintptr_t OverlayTextureId = 0x118;
    inline static constexpr uintptr_t MeshId = 0xE8;
    inline static constexpr uintptr_t BodyPart = 0x138;
};

struct Camera {
    inline static constexpr uintptr_t Position = 0xEC;
    inline static constexpr uintptr_t Rotation = 0xC8;
    inline static constexpr uintptr_t CameraSubject = 0xB8;
    inline static constexpr uintptr_t FieldOfView = 0x130;
    inline static constexpr uintptr_t ImagePlaneDepth = 0x2D4;
    inline static constexpr uintptr_t CameraType = 0x128;
    inline static constexpr uintptr_t Viewport = 0x28C;
    inline static constexpr uintptr_t ViewportSize = 0x2CC;
};

struct BasePart {
    inline static constexpr uintptr_t Primitive = 0x180;
    inline static constexpr uintptr_t Transparency = 0x120;
    inline static constexpr uintptr_t Color3 = 0x39;
    inline static constexpr uintptr_t Shape = 0x1A8;
    inline static constexpr uintptr_t Massless = 0x12A;
    inline static constexpr uintptr_t CastShadow = 0x128;
    inline static constexpr uintptr_t Locked = 0x129;
    inline static constexpr uintptr_t Reflectance = 0xFC;
};

struct Primitive {
    inline static constexpr uintptr_t Position = 0xD4;
    inline static constexpr uintptr_t Validate = 0x6;
    inline static constexpr uintptr_t Owner = 0x218;
    inline static constexpr uintptr_t Size = 0x1C4;
    inline static constexpr uintptr_t Rotation = 0xB0;
    inline static constexpr uintptr_t Flags = 0x1BE;
    inline static constexpr uintptr_t Material = 0x0;
    inline static constexpr uintptr_t AssemblyLinearVelocity = 0xE0;
    inline static constexpr uintptr_t AssemblyAngularVelocity = 0xEC;
};

struct PrimitiveFlags {
    inline static constexpr uintptr_t Anchored = 0x2;
    inline static constexpr uintptr_t CanCollide = 0x8;
    inline static constexpr uintptr_t CanTouch = 0x10;
    inline static constexpr uintptr_t CanQuery = 0x20;
};

struct MeshPart {
    inline static constexpr uintptr_t MeshId = 0x300;
    inline static constexpr uintptr_t Texture = 0x330;
};

struct Model {
    inline static constexpr uintptr_t PrimaryPart = 0x248;
    inline static constexpr uintptr_t Scale = 0x134;
};

struct SpecialMesh {
    inline static constexpr uintptr_t Scale = 0xB4;
    inline static constexpr uintptr_t MeshId = 0xE8;
};

struct Attachment {
    inline static constexpr uintptr_t Position = 0xB4;
};

struct Weld {
    inline static constexpr uintptr_t Part0 = 0x108;
    inline static constexpr uintptr_t Part1 = 0x118;
};

struct WeldConstraint {
    inline static constexpr uintptr_t Part0 = 0xA8;
    inline static constexpr uintptr_t Part1 = 0xB8;
};

struct UnionOperation {
    inline static constexpr uintptr_t AssetId = 0x300;
};

struct PlayerMouse {
    inline static constexpr uintptr_t Workspace = 0x140;
    inline static constexpr uintptr_t Icon = 0xB8;
};

struct GuiObject {
    inline static constexpr uintptr_t ScreenGui_Enabled = 0x4B4;
    inline static constexpr uintptr_t Position = 0x500;
    inline static constexpr uintptr_t Size = 0x520;
    inline static constexpr uintptr_t Visible = 0x59D;
    inline static constexpr uintptr_t Image = 0x9A8;
    inline static constexpr uintptr_t Text = 0xE08;
    inline static constexpr uintptr_t RichText = 0xBA0;
    inline static constexpr uintptr_t BackgroundColor3 = 0x530;
    inline static constexpr uintptr_t BorderColor3 = 0x53C;
    inline static constexpr uintptr_t TextColor3 = 0xEB8;
    inline static constexpr uintptr_t LayoutOrder = 0x56C;
    inline static constexpr uintptr_t ZIndex = 0x594;
    inline static constexpr uintptr_t BackgroundTransparency = 0x53C;
    inline static constexpr uintptr_t Rotation = 0xD8;
};

struct GuiBase2D {
    inline static constexpr uintptr_t AbsoluteSize = 0x0;
    inline static constexpr uintptr_t AbsolutePosition = 0xFC;
    inline static constexpr uintptr_t AbsoluteRotation = 0xD8;
};

struct UserInputService {
    inline static constexpr uintptr_t WindowInputState = 0x2B0;
};

struct WindowInputState {
    inline static constexpr uintptr_t CurrentTextBox = 0x48;
    inline static constexpr uintptr_t CapsLock = 0x40;
};

struct Textures {
    inline static constexpr uintptr_t Decal_Texture = 0x1D0;
    inline static constexpr uintptr_t Texture_Texture = 0x1D0;
};

struct Lighting {
    inline static constexpr uintptr_t ClockTime = 0xB8;
    inline static constexpr uintptr_t Brightness = 0x108;
    inline static constexpr uintptr_t EnvironmentDiffuseScale = 0x10C;
    inline static constexpr uintptr_t EnvironmentSpecularScale = 0x110;
    inline static constexpr uintptr_t FogStart = 0x120;
    inline static constexpr uintptr_t FogEnd = 0x11C;
    inline static constexpr uintptr_t FogColor = 0xE4;
    inline static constexpr uintptr_t Ambient = 0xC0;
    inline static constexpr uintptr_t OutdoorAmbient = 0xF0;
    inline static constexpr uintptr_t ColorShift_Top = 0xCC;
    inline static constexpr uintptr_t ColorShift_Bottom = 0xD8;
    inline static constexpr uintptr_t ExposureCompensation = 0x114;
    inline static constexpr uintptr_t GeographicLatitude = 0x124;
    inline static constexpr uintptr_t LightColor = 0x14C;
    inline static constexpr uintptr_t GradientTop = 0x140;
    inline static constexpr uintptr_t LightDirection = 0x158;
    inline static constexpr uintptr_t GradientBottom = 0x180;
    inline static constexpr uintptr_t GlobalShadows = 0x134;
    inline static constexpr uintptr_t MoonPosition = 0x174;
    inline static constexpr uintptr_t SunPosition = 0x168;
    inline static constexpr uintptr_t Source = 0x164;
    inline static constexpr uintptr_t Sky = 0x1B8;
};

struct Sky {
    inline static constexpr uintptr_t SkyboxBk = 0xE8;
    inline static constexpr uintptr_t SkyboxDn = 0x118;
    inline static constexpr uintptr_t SkyboxFt = 0x148;
    inline static constexpr uintptr_t SkyboxLf = 0x178;
    inline static constexpr uintptr_t SkyboxRt = 0x1A8;
    inline static constexpr uintptr_t SkyboxUp = 0x1D8;
    inline static constexpr uintptr_t SunAngularSize = 0x22C;
    inline static constexpr uintptr_t MoonAngularSize = 0x234;
    inline static constexpr uintptr_t SunTextureId = 0x208;
    inline static constexpr uintptr_t MoonTextureId = 0xB8;
    inline static constexpr uintptr_t SkyboxOrientation = 0x228;
    inline static constexpr uintptr_t StarCount = 0x238;
};

struct Atmosphere {
    inline static constexpr uintptr_t Density = 0xC0;
    inline static constexpr uintptr_t Offset = 0xCC;
    inline static constexpr uintptr_t Color = 0xA8;
    inline static constexpr uintptr_t Decay = 0xB4;
    inline static constexpr uintptr_t Glare = 0xC4;
    inline static constexpr uintptr_t Haze = 0xC8;
};

struct BloomEffect {
    inline static constexpr uintptr_t Intensity = 0xA8;
    inline static constexpr uintptr_t Size = 0xAC;
    inline static constexpr uintptr_t Threshold = 0xB0;
    inline static constexpr uintptr_t Enabled = 0xA0;
};

struct DepthOfFieldEffect {
    inline static constexpr uintptr_t FocusDistance = 0xAC;
    inline static constexpr uintptr_t FarIntensity = 0xA8;
    inline static constexpr uintptr_t NearIntensity = 0xB4;
    inline static constexpr uintptr_t InFocusRadius = 0xB0;
    inline static constexpr uintptr_t Enabled = 0xA0;
};

struct SunRaysEffect {
    inline static constexpr uintptr_t Intensity = 0xA8;
    inline static constexpr uintptr_t Spread = 0xAC;
    inline static constexpr uintptr_t Enabled = 0xA0;
};

struct ColorCorrectionEffect {
    inline static constexpr uintptr_t Brightness = 0xB4;
    inline static constexpr uintptr_t Contrast = 0xB8;
    inline static constexpr uintptr_t TintColor = 0xA8;
    inline static constexpr uintptr_t Enabled = 0xA0;
};

struct ColorGradingEffect {
    inline static constexpr uintptr_t TonemapperPreset = 0xA8;
    inline static constexpr uintptr_t Enabled = 0xA0;
};

struct BlurEffect {
    inline static constexpr uintptr_t Size = 0xA8;
    inline static constexpr uintptr_t Enabled = 0xA0;
};

struct ProximityPrompt {
    inline static constexpr uintptr_t ActionText = 0xA0;
    inline static constexpr uintptr_t ObjectText = 0xC0;
    inline static constexpr uintptr_t HoldDuration = 0x110;
    inline static constexpr uintptr_t MaxActivationDistance = 0x118;
    inline static constexpr uintptr_t KeyCode = 0x114;
    inline static constexpr uintptr_t GamepadKeyCode = 0x10C;
    inline static constexpr uintptr_t Enabled = 0x126;
    inline static constexpr uintptr_t RequiresLineOfSight = 0x127;
};

struct ClickDetector {
    inline static constexpr uintptr_t MaxActivationDistance = 0xD8;
    inline static constexpr uintptr_t MouseIcon = 0xB8;
};

struct DragDetector {
    inline static constexpr uintptr_t ReferenceInstance = 0x1E0;
    inline static constexpr uintptr_t MaxActivationDistance = 0xD8;
    inline static constexpr uintptr_t MaxDragAngle = 0x298;
    inline static constexpr uintptr_t MaxDragTranslation = 0x25C;
    inline static constexpr uintptr_t MinDragAngle = 0x2A4;
    inline static constexpr uintptr_t MinDragTranslation = 0x268;
    inline static constexpr uintptr_t ActivatedCursorIcon = 0x1B0;
    inline static constexpr uintptr_t CursorIcon = 0xB8;
    inline static constexpr uintptr_t MaxForce = 0x29C;
    inline static constexpr uintptr_t MaxTorque = 0x2A0;
    inline static constexpr uintptr_t Responsiveness = 0x2B0;
};

struct AnimationTrack {
    inline static constexpr uintptr_t Animation = 0xA8;
    inline static constexpr uintptr_t Animator = 0x100;
    inline static constexpr uintptr_t Speed = 0xC4;
    inline static constexpr uintptr_t TimePosition = 0xC8;
    inline static constexpr uintptr_t Looped = 0xD5;
    inline static constexpr uintptr_t IsPlaying = 0xA48;
};

struct Animator {
    inline static constexpr uintptr_t ActiveAnimations = 0xA80;
};

struct LocalScript {
    inline static constexpr uintptr_t GUID = 0xC0;
    inline static constexpr uintptr_t Hash = 0x190;
    inline static constexpr uintptr_t ByteCode = 0x0;
};

struct ByteCode {
    inline static constexpr uintptr_t Size = 0x28;
    inline static constexpr uintptr_t Pointer = 0x10;
};

struct Script {
    inline static constexpr uintptr_t GUID = 0xC0;
    inline static constexpr uintptr_t Hash = 0x190;
    inline static constexpr uintptr_t ByteCode = 0x0;
};

struct MeshContentProvider {
    inline static constexpr uintptr_t LRUHolder = 0xC8;
};

struct LRUHolder {
    inline static constexpr uintptr_t MemEnforcedLRUCache = 0x20;
};

struct MemEnforcedLRUCache {
    inline static constexpr uintptr_t Head = 0x8;
};

struct LRUNode {
    inline static constexpr uintptr_t Next = 0x0;
    inline static constexpr uintptr_t AssetID = 0x10;
    inline static constexpr uintptr_t CachedItem = 0x40;
};

struct CachedItem {
    inline static constexpr uintptr_t FileMeshData = 0x40;
};

struct FileMeshData {
    inline static constexpr uintptr_t AABBMin = 0x180;
    inline static constexpr uintptr_t AABBMax = 0x18C;
    inline static constexpr uintptr_t Vertices = 0x0;
    inline static constexpr uintptr_t VerticesEnd = 0x8;
    inline static constexpr uintptr_t Faces = 0x30;
    inline static constexpr uintptr_t FacesEnd = 0x38;
};
