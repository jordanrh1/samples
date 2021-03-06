//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace OICBridge { namespace oic { namespace r { namespace openlevel {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IopenlevelService. Instead, openlevelServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class openlevelServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IopenlevelService
{
public:
    // Method Invocation Events
    // Property Read Events
    event Windows::Foundation::TypedEventHandler<openlevelServiceEventAdapter^, openlevelGetOpenLevelRequestedEventArgs^>^ GetOpenLevelRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<openlevelServiceEventAdapter^, openlevelGetOpenLevelRequestedEventArgs^>^ handler) 
        { 
            return _GetOpenLevelRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<openlevelServiceEventAdapter^>(sender), safe_cast<openlevelGetOpenLevelRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetOpenLevelRequested -= token; 
        } 
    internal: 
        void raise(openlevelServiceEventAdapter^ sender, openlevelGetOpenLevelRequestedEventArgs^ args) 
        { 
            _GetOpenLevelRequested(sender, args);
        } 
    }

    // Property Write Events
    event Windows::Foundation::TypedEventHandler<openlevelServiceEventAdapter^, openlevelSetOpenLevelRequestedEventArgs^>^ SetOpenLevelRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<openlevelServiceEventAdapter^, openlevelSetOpenLevelRequestedEventArgs^>^ handler) 
        { 
            return _SetOpenLevelRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<openlevelServiceEventAdapter^>(sender), safe_cast<openlevelSetOpenLevelRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetOpenLevelRequested -= token; 
        } 
    internal: 
        void raise(openlevelServiceEventAdapter^ sender, openlevelSetOpenLevelRequestedEventArgs^ args) 
        { 
            _SetOpenLevelRequested(sender, args);
        } 
    }

    // IopenlevelService Implementation

    virtual Windows::Foundation::IAsyncOperation<openlevelGetOpenLevelResult^>^ GetOpenLevelAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    virtual Windows::Foundation::IAsyncOperation<openlevelSetOpenLevelResult^>^ SetOpenLevelAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ int64 value);

private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetOpenLevelRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetOpenLevelRequested;
};

} } } } } } 
