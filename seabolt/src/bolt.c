/*
 * Copyright (c) 2002-2017 "Neo Technology,"
 * Network Engine for Objects in Lund AB [http://neotechnology.com]
 *
 * This file is part of Neo4j.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "bolt.h"
#include "config-impl.h"


void Seabolt_init()
{
#if USE_WINSOCK
	WSADATA data;
	WSAStartup(MAKEWORD(2, 2), &data);
#endif

#if USE_OPENSSL

#endif
}

void Seabolt_destroy()
{
#if USE_WINSOCK
	// TODO: Do we need an argument whether to clean-up winsocks? It will probably terminate all winsock related in the process, not only seabolt related
	//WSACleanup();
#endif

}