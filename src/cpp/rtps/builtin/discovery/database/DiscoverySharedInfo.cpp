// Copyright 2020 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file DiscoverySharedInfo.cpp
 *
 */

#include <fastdds/rtps/common/CacheChange.h>
#include <fastdds/rtps/common/GuidPrefix_t.hpp>

#include "./DiscoverySharedInfo.hpp"

namespace eprosima {
namespace fastdds {
namespace rtps {
namespace ddb {


eprosima::fastrtps::rtps::CacheChange_t* DiscoverySharedInfo::set_change_and_unmatch(
        eprosima::fastrtps::rtps::CacheChange_t* change)
{
    relevant_participants_builtin_ack_status_.unmatch_all();
    return change_info(change);
}

eprosima::fastrtps::rtps::CacheChange_t* DiscoverySharedInfo::change_info(
        eprosima::fastrtps::rtps::CacheChange_t* change)
{
    eprosima::fastrtps::rtps::CacheChange_t* old_change = change_;
    change_ = change;
    return old_change;
}

eprosima::fastrtps::rtps::CacheChange_t* change();

} /* namespace ddb */
} /* namespace rtps */
} /* namespace fastdds */
} /* namespace eprosima */
