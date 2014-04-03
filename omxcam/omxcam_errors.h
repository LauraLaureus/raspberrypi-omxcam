#ifndef OMXCAM_ERRORS_H
#define OMXCAM_ERRORS_H

#include <stdarg.h>
#include <stdio.h>

#include "omxcam_omx.h"
#include "omxcam_debug.h"

typedef enum {
  OMXCAM_ErrorNone,
  OMXCAM_ErrorInit,
  OMXCAM_ErrorInitCamera,
  OMXCAM_ErrorInitImageEncoder,
  OMXCAM_ErrorInitVideoEncoder,
  OMXCAM_ErrorInitNullSink,
  OMXCAM_ErrorDeinit,
  OMXCAM_ErrorDeinitCamera,
  OMXCAM_ErrorDeinitImageEncoder,
  OMXCAM_ErrorDeinitVideoEncoder,
  OMXCAM_ErrorDeinitNullSink,
  OMXCAM_ErrorCameraSettings,
  OMXCAM_ErrorStill,
  OMXCAM_ErrorVideo,
  OMXCAM_ErrorBadParameter,
  OMXCAM_ErrorSetupTunnel,
  OMXCAM_ErrorLoaded,
  OMXCAM_ErrorIdle,
  OMXCAM_ErrorExecuting,
  OMXCAM_ErrorFormat
} OMXCAM_ERROR;

void OMXCAM_setError (const char* fmt, ...);
char* OMXCAM_lastError ();
const char* OMXCAM_errorToHuman (OMXCAM_ERROR error);
const char* OMXCAM_dump_OMX_ERRORTYPE (OMX_ERRORTYPE error);

#endif