//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: protofiles/CommonDialog.proto
namespace dbc
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CommonDialogTable")]
  public partial class CommonDialogTable : global::ProtoBuf.IExtensible
  {
    public CommonDialogTable() {}
    
    private string _tname = "";
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"tname", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string tname
    {
      get { return _tname; }
      set { _tname = value; }
    }
    private readonly global::System.Collections.Generic.List<dbc.CommonDialog> _tlist = new global::System.Collections.Generic.List<dbc.CommonDialog>();
    [global::ProtoBuf.ProtoMember(2, Name=@"tlist", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<dbc.CommonDialog> tlist
    {
      get { return _tlist; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CommonDialog")]
  public partial class CommonDialog : global::ProtoBuf.IExtensible
  {
    public CommonDialog() {}
    
    private int _ID = default(int);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"ID", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int ID
    {
      get { return _ID; }
      set { _ID = value; }
    }
    private string _TirgTime = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"TirgTime", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string TirgTime
    {
      get { return _TirgTime; }
      set { _TirgTime = value; }
    }
    private string _RandomText1 = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"RandomText1", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string RandomText1
    {
      get { return _RandomText1; }
      set { _RandomText1 = value; }
    }
    private string _RandomText2 = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"RandomText2", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string RandomText2
    {
      get { return _RandomText2; }
      set { _RandomText2 = value; }
    }
    private string _RandomText3 = "";
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"RandomText3", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string RandomText3
    {
      get { return _RandomText3; }
      set { _RandomText3 = value; }
    }
    private string _RandomText4 = "";
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"RandomText4", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string RandomText4
    {
      get { return _RandomText4; }
      set { _RandomText4 = value; }
    }
    private string _RandomText5 = "";
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"RandomText5", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string RandomText5
    {
      get { return _RandomText5; }
      set { _RandomText5 = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}