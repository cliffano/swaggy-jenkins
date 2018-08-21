/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class HudsonMasterComputermonitorData : IEquatable<HudsonMasterComputermonitorData>
    { 
        /// <summary>
        /// Gets or Sets HudsonNodeMonitorsSwapSpaceMonitor
        /// </summary>
        [DataMember(Name="hudson.node_monitors.SwapSpaceMonitor")]
        public SwapSpaceMonitorMemoryUsage2 HudsonNodeMonitorsSwapSpaceMonitor { get; set; }

        /// <summary>
        /// Gets or Sets HudsonNodeMonitorsTemporarySpaceMonitor
        /// </summary>
        [DataMember(Name="hudson.node_monitors.TemporarySpaceMonitor")]
        public DiskSpaceMonitorDescriptorDiskSpace HudsonNodeMonitorsTemporarySpaceMonitor { get; set; }

        /// <summary>
        /// Gets or Sets HudsonNodeMonitorsDiskSpaceMonitor
        /// </summary>
        [DataMember(Name="hudson.node_monitors.DiskSpaceMonitor")]
        public DiskSpaceMonitorDescriptorDiskSpace HudsonNodeMonitorsDiskSpaceMonitor { get; set; }

        /// <summary>
        /// Gets or Sets HudsonNodeMonitorsArchitectureMonitor
        /// </summary>
        [DataMember(Name="hudson.node_monitors.ArchitectureMonitor")]
        public string HudsonNodeMonitorsArchitectureMonitor { get; set; }

        /// <summary>
        /// Gets or Sets HudsonNodeMonitorsResponseTimeMonitor
        /// </summary>
        [DataMember(Name="hudson.node_monitors.ResponseTimeMonitor")]
        public ResponseTimeMonitorData HudsonNodeMonitorsResponseTimeMonitor { get; set; }

        /// <summary>
        /// Gets or Sets HudsonNodeMonitorsClockMonitor
        /// </summary>
        [DataMember(Name="hudson.node_monitors.ClockMonitor")]
        public ClockDifference HudsonNodeMonitorsClockMonitor { get; set; }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonMasterComputermonitorData {\n");
            sb.Append("  HudsonNodeMonitorsSwapSpaceMonitor: ").Append(HudsonNodeMonitorsSwapSpaceMonitor).Append("\n");
            sb.Append("  HudsonNodeMonitorsTemporarySpaceMonitor: ").Append(HudsonNodeMonitorsTemporarySpaceMonitor).Append("\n");
            sb.Append("  HudsonNodeMonitorsDiskSpaceMonitor: ").Append(HudsonNodeMonitorsDiskSpaceMonitor).Append("\n");
            sb.Append("  HudsonNodeMonitorsArchitectureMonitor: ").Append(HudsonNodeMonitorsArchitectureMonitor).Append("\n");
            sb.Append("  HudsonNodeMonitorsResponseTimeMonitor: ").Append(HudsonNodeMonitorsResponseTimeMonitor).Append("\n");
            sb.Append("  HudsonNodeMonitorsClockMonitor: ").Append(HudsonNodeMonitorsClockMonitor).Append("\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((HudsonMasterComputermonitorData)obj);
        }

        /// <summary>
        /// Returns true if HudsonMasterComputermonitorData instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonMasterComputermonitorData to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonMasterComputermonitorData other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    HudsonNodeMonitorsSwapSpaceMonitor == other.HudsonNodeMonitorsSwapSpaceMonitor ||
                    HudsonNodeMonitorsSwapSpaceMonitor != null &&
                    HudsonNodeMonitorsSwapSpaceMonitor.Equals(other.HudsonNodeMonitorsSwapSpaceMonitor)
                ) && 
                (
                    HudsonNodeMonitorsTemporarySpaceMonitor == other.HudsonNodeMonitorsTemporarySpaceMonitor ||
                    HudsonNodeMonitorsTemporarySpaceMonitor != null &&
                    HudsonNodeMonitorsTemporarySpaceMonitor.Equals(other.HudsonNodeMonitorsTemporarySpaceMonitor)
                ) && 
                (
                    HudsonNodeMonitorsDiskSpaceMonitor == other.HudsonNodeMonitorsDiskSpaceMonitor ||
                    HudsonNodeMonitorsDiskSpaceMonitor != null &&
                    HudsonNodeMonitorsDiskSpaceMonitor.Equals(other.HudsonNodeMonitorsDiskSpaceMonitor)
                ) && 
                (
                    HudsonNodeMonitorsArchitectureMonitor == other.HudsonNodeMonitorsArchitectureMonitor ||
                    HudsonNodeMonitorsArchitectureMonitor != null &&
                    HudsonNodeMonitorsArchitectureMonitor.Equals(other.HudsonNodeMonitorsArchitectureMonitor)
                ) && 
                (
                    HudsonNodeMonitorsResponseTimeMonitor == other.HudsonNodeMonitorsResponseTimeMonitor ||
                    HudsonNodeMonitorsResponseTimeMonitor != null &&
                    HudsonNodeMonitorsResponseTimeMonitor.Equals(other.HudsonNodeMonitorsResponseTimeMonitor)
                ) && 
                (
                    HudsonNodeMonitorsClockMonitor == other.HudsonNodeMonitorsClockMonitor ||
                    HudsonNodeMonitorsClockMonitor != null &&
                    HudsonNodeMonitorsClockMonitor.Equals(other.HudsonNodeMonitorsClockMonitor)
                ) && 
                (
                    Class == other.Class ||
                    Class != null &&
                    Class.Equals(other.Class)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (HudsonNodeMonitorsSwapSpaceMonitor != null)
                    hashCode = hashCode * 59 + HudsonNodeMonitorsSwapSpaceMonitor.GetHashCode();
                    if (HudsonNodeMonitorsTemporarySpaceMonitor != null)
                    hashCode = hashCode * 59 + HudsonNodeMonitorsTemporarySpaceMonitor.GetHashCode();
                    if (HudsonNodeMonitorsDiskSpaceMonitor != null)
                    hashCode = hashCode * 59 + HudsonNodeMonitorsDiskSpaceMonitor.GetHashCode();
                    if (HudsonNodeMonitorsArchitectureMonitor != null)
                    hashCode = hashCode * 59 + HudsonNodeMonitorsArchitectureMonitor.GetHashCode();
                    if (HudsonNodeMonitorsResponseTimeMonitor != null)
                    hashCode = hashCode * 59 + HudsonNodeMonitorsResponseTimeMonitor.GetHashCode();
                    if (HudsonNodeMonitorsClockMonitor != null)
                    hashCode = hashCode * 59 + HudsonNodeMonitorsClockMonitor.GetHashCode();
                    if (Class != null)
                    hashCode = hashCode * 59 + Class.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(HudsonMasterComputermonitorData left, HudsonMasterComputermonitorData right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(HudsonMasterComputermonitorData left, HudsonMasterComputermonitorData right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
