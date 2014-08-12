#!/usr/bin/env python
"""
WordAPI.py
Copyright 2014 Wordnik, Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
"""
import sys
import os

from models import *


class ChatApi(object):

    def __init__(self, apiClient):
      self.apiClient = apiClient

    

    def chat_create(self, message, **kwargs):
        """Send a chat message.

        Args:
            message, str:  (required)

            

        Returns: chat
        """

        allParams = ['message']

        params = locals()
        for (key, val) in params['kwargs'].iteritems():
            if key not in allParams:
                raise TypeError("Got an unexpected keyword argument '%s' to method chat_create" % key)
            params[key] = val
        del params['kwargs']

        resourcePath = '/chat'
        resourcePath = resourcePath.replace('{format}', 'json')
        method = 'POST'

        queryParams = {}
        headerParams = {}

        postData = (params['body'] if 'body' in params else None)

        response = self.apiClient.callAPI(resourcePath, method, queryParams,
                                          postData, headerParams)

        if not response:
            return None

        responseObject = self.apiClient.deserialize(response, 'chat')
        return responseObject
        

        

    def chat_find(self, **kwargs):
        """Get chat messages.

        Args:
            count, float:  (optional)

            

        Returns: Array[chat]
        """

        allParams = ['count']

        params = locals()
        for (key, val) in params['kwargs'].iteritems():
            if key not in allParams:
                raise TypeError("Got an unexpected keyword argument '%s' to method chat_find" % key)
            params[key] = val
        del params['kwargs']

        resourcePath = '/chat'
        resourcePath = resourcePath.replace('{format}', 'json')
        method = 'GET'

        queryParams = {}
        headerParams = {}

        if ('count' in params):
            queryParams['count'] = self.apiClient.toPathValue(params['count'])
        postData = (params['body'] if 'body' in params else None)

        response = self.apiClient.callAPI(resourcePath, method, queryParams,
                                          postData, headerParams)

        if not response:
            return None

        responseObject = self.apiClient.deserialize(response, 'Array[chat]')
        return responseObject
        

        

    




