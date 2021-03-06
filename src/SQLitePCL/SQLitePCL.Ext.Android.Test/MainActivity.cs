﻿using Android.App;
using Android.OS;

namespace SQLitePCL.Ext.Android.Test
{
    using System.Reflection;
    using Xamarin.Android.NUnitLite;

    [Activity(Label = "SQLitePCL.Ext.Android.Test", MainLauncher = true)]
    public class MainActivity : TestSuiteActivity
    {
        protected override void OnCreate(Bundle bundle)
        {
            // tests can be inside the main assembly
            // or in any reference assemblies
            // AddTest (typeof (Your.Library.TestClass).Assembly);
            this.AddTest(Assembly.GetExecutingAssembly());

            // Once you called base.OnCreate(), you cannot add more assemblies.
            base.OnCreate(bundle);
        }
    }
}