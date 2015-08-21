/*
 Copyright (C) 2015 Hewlett Packard Enterprise Development LP
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License"); you may
 not use this file except in compliance with the License. You may obtain
 a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 License for the specific language governing permissions and limitations
 under the License.
*/
/****************************************************************************
 * @ingroup cli/vtysh
 *
 * @file vlan_vty.h
 *
 ***************************************************************************/

#ifndef _VLAN_VTY_H
#define _VLAN_VTY_H

#include <sys/un.h>
#include <setjmp.h>
#include <sys/wait.h>
#include <pwd.h>

#include <readline/readline.h>
#include <readline/history.h>

#include <lib/version.h>
#include "command.h"
#include "vtysh/vtysh.h"
#include "vswitch-idl.h"
#include "ovsdb-idl.h"
#include "openhalon-idl.h"
#include "openhalon-dflt.h"
#include "openvswitch/vlog.h"
#include "vtysh/vtysh_ovsdb_config.h"

/* vlan length + 1 */
#define VLAN_ID_LEN 5

/* max(strlen("ascending"), strlen("descending")) + 1 */
#define VLAN_POLICY_STR_LEN 11

#define INTERNAL_VLAN_ID_INVALID    -1

#define VLAN_DESCRIPTION_LENGTH 256
#define VLAN_DESCRIPTION_LENGTH_ERROR "The input description must be less than 250 characters%s"
#define OVSDB_VLAN_SET_DESCRIPTION_ERROR "Failed to set VLAN description%s"
#define OVSDB_VLAN_REMOVE_DESCRIPTION_ERROR "Failed to remove VLAN description%s"
#define OVSDB_VLAN_SHUTDOWN_ERROR "Failed to shutdown VLAN%s"
#define OVSDB_VLAN_NO_SHUTDOWN_ERROR "Failed to enable VLAN%s"
#define OVSDB_INTF_VLAN_ACCESS_ERROR "Failed to set access VLAN %d%s"
#define OVSDB_INTF_VLAN_REMOVE_ACCESS_ERROR "Failed to remove access VLAN%s"
#define OVSDB_INTF_VLAN_TRUNK_ALLOWED_ERROR "Failed to set allowed trunk VLAN %d%s"
#define OVSDB_INTF_VLAN_REMOVE_TRUNK_ALLOWED_ERROR "Failed to remove allowed trunk VLAN %d%s"
#define OVSDB_INTF_VLAN_TRUNK_NATIVE_ERROR "Failed to set native VLAN %d%s"
#define OVSDB_INTF_VLAN_REMOVE_TRUNK_NATIVE_ERROR "Failed to remove native VLAN%s"
#define OVSDB_INTF_VLAN_TRUNK_NATIVE_TAG_ERROR "Failed to set native VLAN tagging on the interface%s"
#define OVSDB_INTF_VLAN_REMOVE_TRUNK_NATIVE_TAG_ERROR "Failed to remove native VLAN tagging on the interface%s"

void vlan_vty_init(void);

#endif /* _VLAN_VTY_H */
