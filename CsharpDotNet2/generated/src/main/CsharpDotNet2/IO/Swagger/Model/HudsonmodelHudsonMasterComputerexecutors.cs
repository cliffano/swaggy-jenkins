using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class HudsonmodelHudsonMasterComputerexecutors {
    /// <summary>
    /// Gets or Sets CurrentExecutable
    /// </summary>
    [DataMember(Name="currentExecutable", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currentExecutable")]
    public HudsonmodelFreeStyleBuild CurrentExecutable { get; set; }

    /// <summary>
    /// Gets or Sets Idle
    /// </summary>
    [DataMember(Name="idle", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "idle")]
    public bool? Idle { get; set; }

    /// <summary>
    /// Gets or Sets LikelyStuck
    /// </summary>
    [DataMember(Name="likelyStuck", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "likelyStuck")]
    public bool? LikelyStuck { get; set; }

    /// <summary>
    /// Gets or Sets Number
    /// </summary>
    [DataMember(Name="number", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "number")]
    public int? Number { get; set; }

    /// <summary>
    /// Gets or Sets Progress
    /// </summary>
    [DataMember(Name="progress", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "progress")]
    public int? Progress { get; set; }

    /// <summary>
    /// Gets or Sets _Class
    /// </summary>
    [DataMember(Name="_class", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "_class")]
    public string _Class { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HudsonmodelHudsonMasterComputerexecutors {\n");
      sb.Append("  CurrentExecutable: ").Append(CurrentExecutable).Append("\n");
      sb.Append("  Idle: ").Append(Idle).Append("\n");
      sb.Append("  LikelyStuck: ").Append(LikelyStuck).Append("\n");
      sb.Append("  Number: ").Append(Number).Append("\n");
      sb.Append("  Progress: ").Append(Progress).Append("\n");
      sb.Append("  _Class: ").Append(_Class).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}