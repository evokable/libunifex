/*
 * Copyright 2019-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

// the configured options and settings for unifex
#define UNIFEX_VERSION_MAJOR 0
#define UNIFEX_VERSION_MINOR 1

#define UNIFEX_NO_MEMORY_RESOURCE 0
#define UNIFEX_MEMORY_RESOURCE_HEADER memory_resource
#define UNIFEX_MEMORY_RESOURCE_NAMESPACE std::pmr

#if __GNUG__
#define UNIFEX_NO_UNIQUE_ADDRESS [[no_unique_address]]
#else
#define UNIFEX_NO_UNIQUE_ADDRESS
#endif

#define UNIFEX_NO_COROUTINES 0
#define UNIFEX_COROUTINES_HEADER experimental/coroutine
#define UNIFEX_COROUTINES_NAMESPACE std::experimental
