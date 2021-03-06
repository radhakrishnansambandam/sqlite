// Copyright � Microsoft Open Technologies, Inc.
// All Rights Reserved
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at 
// http://www.apache.org/licenses/LICENSE-2.0
// 
// THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
// 
// See the Apache 2 License for the specific language governing permissions and limitations under the License.

#pragma once
namespace SQLitePCL
{
	namespace Ext
	{
		namespace WindowsPhone8
		{
			namespace RuntimeProxy
			{
				using namespace Platform;

				public ref class SQLite3RuntimeProvider sealed
				{
				public:
					static int32 sqlite3_win32_set_directory(uint32 type, String^ zValue);

					static int32 sqlite3_open(int64 filename, int64* db);

					static int32 sqlite3_open_v2(int64 filename, int64* db, int32 flags, int64 zVfs);

					static int32 sqlite3_close_v2(int64 db);

					static int32 sqlite3_prepare_v2(int64 db, int64 zSql, int32 nByte, int64* ppStmpt, int64 pzTail);

					static int32 sqlite3_create_function(int64 db, int64 zFunctionName, int32 nArg, int32 eTextRep, int64 pApp, int64 xFunc, int64 xStep, int64 xFinal);

					static int32 sqlite3_create_collation(int64 db, int64 zName, int32 eTextRep, int64 pArg, int64 xCompare);

					static int64 sqlite3_last_insert_rowid(int64 db);

					static int64 sqlite3_errmsg(int64 db);

					static int32 sqlite3_bind_int(int64 stmHandle, int32 iParam, int32 value);

					static int32 sqlite3_bind_int64(int64 stmHandle, int32 iParam, int64 value);

					static int32 sqlite3_bind_text(int64 stmHandle, int32 iParam, int64 value, int32 length, int64 destructor);

					static int32 sqlite3_bind_double(int64 stmHandle, int32 iParam, float64 value);

					static int32 sqlite3_bind_blob(int64 stmHandle, int32 iParam, const Array<uint8>^ value, int32 length, int64 destructor);

					static int32 sqlite3_bind_null(int64 stmHandle, int32 iParam);

					static int32 sqlite3_bind_parameter_count(int64 stmHandle);

					static int64 sqlite3_bind_parameter_name(int64 stmHandle, int32 iParam);

					static int32 sqlite3_bind_parameter_index(int64 stmHandle, int64 paramName);

					static int32 sqlite3_step(int64 stmHandle);

					static int32 sqlite3_column_int(int64 stmHandle, int32 iCol);

					static int64 sqlite3_column_int64(int64 stmHandle, int32 iCol);

					static int64 sqlite3_column_text(int64 stmHandle, int32 iCol);

					static float64 sqlite3_column_double(int64 stmHandle, int32 iCol);

					static int64 sqlite3_column_blob(int64 stmHandle, int32 iCol);

					static int32 sqlite3_column_type(int64 stmHandle, int32 iCol);

					static int32 sqlite3_column_bytes(int64 stmHandle, int32 iCol);

					static int32 sqlite3_column_count(int64 stmHandle);

					static int64 sqlite3_column_name(int64 stmHandle, int32 iCol);

					static int64 sqlite3_column_origin_name(int64 stmHandle, int32 iCol);

					static int64 sqlite3_column_table_name(int64 stmHandle, int32 iCol);

					static int64 sqlite3_column_database_name(int64 stmHandle, int32 iCol);

					static int32 sqlite3_data_count(int64 stmHandle);

					static int32 sqlite3_reset(int64 stmHandle);

					static int32 sqlite3_clear_bindings(int64 stmHandle);

					static int32 sqlite3_finalize(int64 stmHandle);

					static int32 sqlite3_value_int(int64 value);

					static int64 sqlite3_value_int64(int64 value);

					static int64 sqlite3_value_text(int64 value);

					static float64 sqlite3_value_double(int64 value);

					static int64 sqlite3_value_blob(int64 value);

					static int32 sqlite3_value_type(int64 value);

					static int32 sqlite3_value_bytes(int64 value);

					static void sqlite3_result_int(int64 context, int32 result);

					static void sqlite3_result_int64(int64 context, int64 result);

					static void sqlite3_result_text(int64 context, int64 result, int32 length, int64 destructor);

					static void sqlite3_result_double(int64 context, float64 result);

					static void sqlite3_result_blob(int64 context, const Array<uint8>^ result, int32 length, int64 destructor);

					static void sqlite3_result_null(int64 context);

					static void sqlite3_result_error(int64 context, int64 result, int32 length);

					static int64 sqlite3_aggregate_context(int64 context, int32 length);

					static int32 sqlite3_changes(int64 value);
				};
			}
		}
	}
}

