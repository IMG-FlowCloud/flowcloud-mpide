/****************************************************************************
 Copyright (c) 2014, Imagination Technologies Limited
 All rights reserved.

 Redistribution and use of the Software in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

     1. The Software (including after any modifications that you make to it) must support the FlowCloud Web Service API provided by Licensor and accessible at  http://ws-uat.flowworld.com and/or some other location(s) that we specify.

     2. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

     3. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

     4. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this Software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/
/** @file */

#ifndef FLOW_USERS_DEVICEUSERREGISTRATIONCREDENTIALS_H_
#define FLOW_USERS_DEVICEUSERREGISTRATIONCREDENTIALS_H_
#include "flow/core/base_types.h"
#include "flow/core/deviceuserregistrationcredentials_type.h"
#include "flow/core/flow_memorymanager.h"
#include "flow/core/flow_memorymanager_methods.h"
#include "flow/core/flow_object.h"
#include "flow/core/flow_object_methods.h"
#include "flow/core/xml_serialisation.h"
/**
 * \memberof FlowDeviceUserRegistrationCredentials
 * \brief Creates a new FlowDeviceUserRegistrationCredentials.
 * 
 * You should use the result of this method whenever you need to submit a Object as a \a data parameter.
 * \param memoryManager Memory manager on which the method will be applied
*/
static inline FlowDeviceUserRegistrationCredentials FlowDeviceUserRegistrationCredentials_New(FlowMemoryManager memoryManager){ return (FlowDeviceUserRegistrationCredentials)FlowMemoryManager_NewObject(memoryManager, 1, 0, FlowType_DeviceUserRegistrationCredentials);}
/**
 * \memberof FlowDeviceUserRegistrationCredentials
 * \brief Registers meta data used for (de)serialising FlowDeviceUserRegistrationCredentials to XML.
 * 
 * You should this if you are going to use this type in application code.
*/
static inline void  FlowDeviceUserRegistrationCredentials_RegisterType()
{
	if(!FlowXMLDeserialiser_IsRegisteredType(FlowType_DeviceUserRegistrationCredentials))
	{
		FlowXMLDeserialiser_RegisterType(FlowType_DeviceUserRegistrationCredentials, "DeviceUserRegistrationCredentials", 1, 0);
		FlowXMLDeserialiser_RegisterTypeProperty(FlowType_DeviceUserRegistrationCredentials, _FlowDeviceUserRegistrationCredentials_UserToken, FlowType_Token, "UserToken", true);
	}
}
/**
 * \memberof FlowDeviceUserRegistrationCredentials
 * \brief Indicates whether the property UserToken is set on this object.
 * 
 * Can be used to check whether UserToken is available on this object without making an HTTP call.
 * \param self Object on which the method will be applied
*/
static inline bool FlowDeviceUserRegistrationCredentials_HasUserToken(FlowDeviceUserRegistrationCredentials self) { return FlowObject_HasProperty(self, _FlowDeviceUserRegistrationCredentials_UserToken);}
/**
 * \memberof FlowDeviceUserRegistrationCredentials
 * \param self Object on which the method will be applied
*/
static inline FlowToken FlowDeviceUserRegistrationCredentials_GetUserToken(FlowDeviceUserRegistrationCredentials self) { return FlowObject_GetTokenProperty(self, _FlowDeviceUserRegistrationCredentials_UserToken);}
/**
 * \memberof FlowDeviceUserRegistrationCredentials
 * \param self Object on which the method will be applied
 * \param value new value for this property
*/
static inline void  FlowDeviceUserRegistrationCredentials_SetUserToken(FlowDeviceUserRegistrationCredentials self, FlowToken value) { FlowObject_SetTokenProperty(self, _FlowDeviceUserRegistrationCredentials_UserToken, value);}
#endif /* FLOW_USERS_DEVICEUSERREGISTRATIONCREDENTIALS_H_ */
