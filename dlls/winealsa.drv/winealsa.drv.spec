# WinMM driver functions
@ stdcall -private DriverProc(long long long long long) ALSA_DriverProc
@ stdcall -private midMessage(long long long long long) ALSA_midMessage
@ stdcall -private modMessage(long long long long long) ALSA_modMessage

# MMDevAPI driver functions
@ stdcall -private GetEndpointIDs(long ptr ptr ptr ptr) AUDDRV_GetEndpointIDs
@ stdcall -private GetAudioEndpoint(ptr ptr ptr) AUDDRV_GetAudioEndpoint
@ stdcall -private GetAudioSessionManager(ptr ptr) AUDDRV_GetAudioSessionManager
@ stdcall -private GetAudioSessionWrapper(ptr ptr ptr) AUDDRV_GetAudioSessionWrapper
@ stdcall -private GetPropValue(ptr ptr ptr) AUDDRV_GetPropValue
